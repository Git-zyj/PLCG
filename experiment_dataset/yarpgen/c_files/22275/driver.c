#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
unsigned long long int var_1 = 470098069329393174ULL;
unsigned short var_2 = (unsigned short)8566;
unsigned long long int var_3 = 15789582506862652498ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 79414059960674183LL;
int var_6 = -1785591525;
unsigned long long int var_7 = 8271746410791518965ULL;
unsigned short var_8 = (unsigned short)32062;
short var_9 = (short)-15650;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
unsigned long long int var_12 = 7423092983264912594ULL;
unsigned char var_13 = (unsigned char)252;
unsigned long long int var_14 = 15878449232804357653ULL;
unsigned int var_15 = 3530817882U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -5036559035491310869LL;
unsigned int var_18 = 3577152890U;
int var_19 = 1637416199;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 13244240028887593009ULL;
unsigned int var_22 = 3271489517U;
_Bool var_23 = (_Bool)1;
short var_24 = (short)14956;
unsigned int var_25 = 2793197613U;
unsigned char var_26 = (unsigned char)177;
int var_27 = -1358655509;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
long long int var_31 = -1582888579136230800LL;
unsigned short var_32 = (unsigned short)63435;
unsigned char var_33 = (unsigned char)34;
short var_34 = (short)3404;
unsigned short arr_1 [14] [14] ;
signed char arr_2 [14] [14] ;
_Bool arr_4 [20] ;
unsigned int arr_5 [20] ;
short arr_6 [20] ;
int arr_7 [20] [20] [20] ;
unsigned char arr_8 [20] [20] [20] ;
long long int arr_9 [20] [20] ;
_Bool arr_10 [20] [20] ;
_Bool arr_12 [20] [20] [20] ;
unsigned char arr_13 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55039 : (unsigned short)22918;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)35 : (signed char)118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 3169278340U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)-8841;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1793700026 : 51285420;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1656285964616911575LL : -212847694974211701LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)146 : (unsigned char)33;
}

void checksum() {
    hash(&seed, var_11);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
