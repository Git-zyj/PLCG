#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-32;
signed char var_5 = (signed char)-74;
signed char var_6 = (signed char)-42;
signed char var_11 = (signed char)22;
signed char var_13 = (signed char)80;
signed char var_14 = (signed char)70;
signed char var_15 = (signed char)-106;
int zero = 0;
signed char var_20 = (signed char)37;
signed char var_21 = (signed char)-14;
signed char var_22 = (signed char)-52;
signed char var_23 = (signed char)45;
signed char var_24 = (signed char)-35;
signed char var_25 = (signed char)35;
signed char var_26 = (signed char)-121;
signed char var_27 = (signed char)-8;
signed char arr_0 [15] [15] ;
signed char arr_1 [15] ;
signed char arr_3 [15] [15] ;
signed char arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)82;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
