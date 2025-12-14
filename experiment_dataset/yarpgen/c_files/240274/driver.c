#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)24;
unsigned char var_4 = (unsigned char)82;
_Bool var_5 = (_Bool)1;
short var_7 = (short)1583;
long long int var_9 = 7654828826489273856LL;
unsigned long long int var_10 = 10438231296906816102ULL;
unsigned int var_11 = 1659338689U;
_Bool var_12 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-3953;
int zero = 0;
short var_18 = (short)5469;
short var_19 = (short)30210;
unsigned char var_20 = (unsigned char)244;
long long int var_21 = 5901788017523944551LL;
unsigned short var_22 = (unsigned short)54226;
long long int var_23 = -636355996919690887LL;
unsigned long long int var_24 = 16169940540816104820ULL;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)1;
int var_27 = -1153623992;
unsigned int var_28 = 2957418817U;
unsigned char var_29 = (unsigned char)230;
int var_30 = 909734667;
int var_31 = 1110954721;
unsigned char var_32 = (unsigned char)50;
short var_33 = (short)3189;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)240;
short var_36 = (short)17986;
long long int var_37 = 2279729848609469616LL;
_Bool var_38 = (_Bool)0;
short arr_0 [19] ;
long long int arr_1 [19] ;
int arr_3 [17] [17] ;
_Bool arr_4 [17] ;
short arr_10 [17] [17] ;
unsigned char arr_17 [25] ;
long long int arr_2 [19] ;
int arr_5 [17] ;
short arr_8 [17] ;
unsigned int arr_9 [17] [17] [17] ;
short arr_14 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)27193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4370073343179418184LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1132111540;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-7514;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)84 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 7560116161637908978LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1943730067 : 1164561904;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-18932 : (short)-4937;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 82522886U : 1596734706U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)15077 : (short)7099;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
