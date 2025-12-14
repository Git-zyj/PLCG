#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-102;
signed char var_4 = (signed char)-47;
signed char var_6 = (signed char)-53;
signed char var_7 = (signed char)97;
signed char var_8 = (signed char)19;
signed char var_9 = (signed char)-24;
signed char var_11 = (signed char)-8;
signed char var_12 = (signed char)-109;
signed char var_14 = (signed char)99;
signed char var_15 = (signed char)123;
int zero = 0;
signed char var_16 = (signed char)14;
signed char var_17 = (signed char)-98;
signed char var_18 = (signed char)-51;
signed char var_19 = (signed char)16;
signed char var_20 = (signed char)-52;
signed char var_21 = (signed char)-91;
signed char var_22 = (signed char)-4;
signed char arr_0 [17] ;
signed char arr_1 [17] ;
signed char arr_2 [22] ;
signed char arr_3 [22] [22] ;
signed char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)97;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)80;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
