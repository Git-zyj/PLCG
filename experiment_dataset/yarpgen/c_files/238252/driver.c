#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
long long int var_8 = -6153170625542348075LL;
unsigned char var_9 = (unsigned char)178;
long long int var_13 = 5238570532498866699LL;
unsigned long long int var_14 = 8266986922791423206ULL;
unsigned long long int var_16 = 16847295292937466435ULL;
int zero = 0;
short var_17 = (short)-13252;
unsigned long long int var_18 = 12353895368512857809ULL;
int var_19 = -764425990;
unsigned short var_20 = (unsigned short)16806;
unsigned short var_21 = (unsigned short)39149;
unsigned long long int var_22 = 16474504685215195228ULL;
unsigned short var_23 = (unsigned short)13009;
int var_24 = 297964694;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)48572;
unsigned int var_27 = 124915157U;
long long int arr_0 [10] [10] ;
signed char arr_3 [21] ;
int arr_5 [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3494724264880731411LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1555447942 : -164110766;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 542100572715245805ULL : 5725998999614543127ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)34490;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
