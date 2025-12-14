#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
signed char var_1 = (signed char)36;
signed char var_3 = (signed char)-15;
signed char var_6 = (signed char)-59;
signed char var_7 = (signed char)-56;
signed char var_8 = (signed char)72;
signed char var_9 = (signed char)-6;
signed char var_11 = (signed char)-86;
signed char var_12 = (signed char)65;
signed char var_13 = (signed char)89;
signed char var_14 = (signed char)102;
signed char var_15 = (signed char)-58;
int zero = 0;
signed char var_17 = (signed char)-110;
signed char var_18 = (signed char)1;
signed char var_19 = (signed char)-110;
signed char var_20 = (signed char)116;
signed char var_21 = (signed char)35;
signed char var_22 = (signed char)10;
signed char var_23 = (signed char)-58;
signed char var_24 = (signed char)34;
signed char var_25 = (signed char)-74;
signed char arr_2 [22] ;
signed char arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-49 : (signed char)-68;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
