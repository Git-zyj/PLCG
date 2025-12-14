#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 903452060U;
int var_2 = 309256577;
int var_3 = -1804824144;
int var_4 = 1382848;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 153090336648453876ULL;
unsigned int var_7 = 3518352005U;
int var_9 = 340655550;
int var_10 = 746199531;
int var_11 = 497976668;
unsigned short var_12 = (unsigned short)53059;
int var_13 = 293968543;
int var_14 = -1424014407;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 4217635413U;
int var_17 = -89175216;
int zero = 0;
int var_18 = -1558674219;
long long int var_19 = -8340977631396427121LL;
int var_20 = -2092319789;
unsigned char var_21 = (unsigned char)108;
unsigned long long int var_22 = 13998382500822328240ULL;
unsigned int var_23 = 2703163420U;
long long int var_24 = 6341840419447752900LL;
int var_25 = -1197870570;
unsigned short var_26 = (unsigned short)33181;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 333282230U;
int var_29 = -1120202168;
int var_30 = 201303749;
int var_31 = 1170271841;
_Bool var_32 = (_Bool)1;
int var_33 = -410489809;
unsigned short var_34 = (unsigned short)11588;
int var_35 = -2133669642;
long long int var_36 = -1230677258676415940LL;
int var_37 = -1207995608;
int var_38 = 1319855901;
unsigned char var_39 = (unsigned char)231;
int arr_0 [19] ;
unsigned char arr_2 [19] ;
int arr_4 [19] [19] [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
unsigned short arr_8 [19] [19] [19] ;
int arr_9 [19] ;
unsigned int arr_13 [19] [19] [19] ;
int arr_17 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1562079675;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 771577368 : -371242668;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3692296627175772987ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)54388;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 415422475;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3245283221U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1571602056;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
