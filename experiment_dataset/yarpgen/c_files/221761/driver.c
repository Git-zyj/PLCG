#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)15;
unsigned long long int var_3 = 14153903874864656638ULL;
unsigned char var_4 = (unsigned char)69;
int var_5 = 1489800541;
unsigned long long int var_6 = 15744524782421877622ULL;
unsigned char var_7 = (unsigned char)54;
int var_8 = -1856097913;
long long int var_9 = -92566801189654132LL;
signed char var_10 = (signed char)42;
unsigned long long int var_12 = 4133512669495413264ULL;
int var_13 = -916171477;
unsigned short var_14 = (unsigned short)31905;
int zero = 0;
int var_15 = -563705376;
short var_16 = (short)-31292;
short var_17 = (short)-18619;
unsigned long long int var_18 = 17255327595694326596ULL;
long long int var_19 = 1498661784829794168LL;
unsigned long long int var_20 = 5448193918495888366ULL;
unsigned char var_21 = (unsigned char)81;
unsigned long long int var_22 = 10030257709681091951ULL;
unsigned long long int var_23 = 3834151538038027557ULL;
unsigned long long int var_24 = 13601907849144005848ULL;
long long int var_25 = -807447774691857863LL;
short var_26 = (short)-29804;
signed char var_27 = (signed char)68;
long long int var_28 = -4016203675791754296LL;
unsigned long long int var_29 = 7662376490958060116ULL;
unsigned long long int var_30 = 6590392605655091582ULL;
long long int var_31 = -1273202160337313155LL;
unsigned char var_32 = (unsigned char)66;
long long int var_33 = 6709370720197936294LL;
_Bool var_34 = (_Bool)0;
long long int var_35 = -54269033483432191LL;
signed char var_36 = (signed char)118;
long long int arr_1 [20] [20] ;
int arr_2 [20] ;
unsigned char arr_3 [20] ;
unsigned int arr_4 [20] ;
int arr_5 [20] [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned short arr_9 [20] [20] ;
unsigned long long int arr_12 [20] [20] ;
unsigned long long int arr_20 [20] ;
unsigned int arr_21 [20] [20] [20] [20] ;
unsigned int arr_25 [19] ;
short arr_26 [19] [19] [19] ;
unsigned long long int arr_32 [25] [25] ;
unsigned long long int arr_6 [20] [20] ;
int arr_15 [20] [20] ;
unsigned long long int arr_28 [19] ;
signed char arr_29 [19] ;
int arr_36 [25] [25] [25] ;
unsigned char arr_37 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 7003829969255517021LL : -901368872281446775LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -978774801;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 2464251967U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -1488805772;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 18430386236408095086ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 7248357674854314750ULL : 3230107851916562435ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 6051217959157041184ULL : 2866078680414168716ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 688300814U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = 1274260347U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-18578 : (short)-17285;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_32 [i_0] [i_1] = 11675830812372802799ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 12980439030570308949ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 327650113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 681879782914649461ULL : 16353870305422499493ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)9 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1116304523 : 873200177;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_37 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)206;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
