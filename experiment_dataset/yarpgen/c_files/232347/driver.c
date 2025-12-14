#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10485809926091657355ULL;
unsigned long long int var_1 = 4965704883528697381ULL;
long long int var_2 = 3864159049194709033LL;
long long int var_6 = -5349826574127421149LL;
signed char var_7 = (signed char)55;
long long int var_8 = -6976994712433320696LL;
unsigned long long int var_10 = 17415738650030066820ULL;
long long int var_11 = 7218410193074983093LL;
unsigned short var_13 = (unsigned short)38827;
unsigned long long int var_15 = 2973413933212800509ULL;
int zero = 0;
short var_17 = (short)-28290;
short var_18 = (short)8590;
unsigned long long int var_19 = 6352016712280301417ULL;
unsigned long long int var_20 = 17584012835374865568ULL;
signed char var_21 = (signed char)-51;
unsigned long long int var_22 = 14808540389623503460ULL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 4959278206442767895ULL;
unsigned long long int var_25 = 16814962233241555760ULL;
unsigned short var_26 = (unsigned short)36640;
long long int var_27 = -5561964920443060699LL;
_Bool var_28 = (_Bool)1;
signed char var_29 = (signed char)119;
long long int var_30 = -2490986913504349384LL;
long long int var_31 = -7583047124861665311LL;
long long int var_32 = -5117714018139193598LL;
long long int var_33 = 4077867332011234831LL;
signed char var_34 = (signed char)35;
long long int var_35 = 4139979032843776998LL;
short var_36 = (short)25783;
long long int var_37 = 5721965175399574887LL;
unsigned long long int var_38 = 15374067330426986098ULL;
long long int var_39 = 2833313679864726253LL;
long long int var_40 = -1837901933849517937LL;
unsigned long long int arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
signed char arr_3 [23] [23] [23] ;
signed char arr_4 [23] [23] ;
signed char arr_5 [23] [23] ;
unsigned long long int arr_6 [16] ;
signed char arr_14 [15] [15] [15] ;
short arr_15 [20] ;
long long int arr_22 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2370939157231043444ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)50965;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9481;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 7480036529926638753ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (short)23107;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = 1866912341126167006LL;
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
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
