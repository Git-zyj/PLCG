#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1092943653212617148ULL;
short var_1 = (short)28865;
unsigned long long int var_2 = 18335891037350153838ULL;
unsigned char var_3 = (unsigned char)154;
unsigned int var_5 = 4269353856U;
unsigned char var_7 = (unsigned char)110;
unsigned short var_11 = (unsigned short)9860;
unsigned long long int var_14 = 6942869132465292184ULL;
int zero = 0;
int var_18 = -124159847;
int var_19 = -1846282990;
unsigned char var_20 = (unsigned char)18;
unsigned short var_21 = (unsigned short)3011;
signed char var_22 = (signed char)125;
unsigned short var_23 = (unsigned short)47756;
unsigned int var_24 = 3319156464U;
int var_25 = 183413312;
unsigned long long int var_26 = 15309006393807815752ULL;
long long int var_27 = 1913449147937841020LL;
unsigned short arr_3 [23] [23] [23] ;
int arr_11 [23] ;
long long int arr_13 [23] [23] ;
short arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)19673;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1057521352 : -231890818;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -575078218366274522LL : 1843671957106907729LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (short)29080 : (short)-11962;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
