#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -869656355;
short var_2 = (short)-26709;
short var_3 = (short)22228;
short var_4 = (short)-29445;
short var_5 = (short)21933;
signed char var_6 = (signed char)-4;
signed char var_8 = (signed char)62;
int var_9 = 264087331;
short var_10 = (short)3025;
short var_11 = (short)-17437;
int zero = 0;
long long int var_12 = 3008547871966085455LL;
short var_13 = (short)-18574;
signed char var_14 = (signed char)-95;
short var_15 = (short)23932;
long long int var_16 = 260835938140092487LL;
short var_17 = (short)11949;
int var_18 = -1560674694;
long long int var_19 = -6232208768924761389LL;
short var_20 = (short)29328;
short var_21 = (short)-9234;
short var_22 = (short)22786;
signed char var_23 = (signed char)-121;
short var_24 = (short)-32665;
short arr_0 [25] ;
short arr_1 [25] ;
short arr_2 [17] [17] ;
short arr_3 [17] ;
short arr_5 [22] ;
short arr_6 [22] ;
short arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-21485;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)-29416;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5782;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-32628 : (short)-16162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-13322;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)30892;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-291;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
