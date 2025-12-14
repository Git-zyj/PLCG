#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1442169776303106220LL;
short var_1 = (short)27734;
unsigned long long int var_2 = 8761298161476860582ULL;
unsigned char var_3 = (unsigned char)201;
short var_4 = (short)20692;
unsigned long long int var_5 = 9647985017219052617ULL;
long long int var_6 = 2451969448889400158LL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)3777;
signed char var_10 = (signed char)-51;
unsigned long long int var_11 = 4383016514315346780ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7081298285165207440ULL;
unsigned short var_14 = (unsigned short)9817;
int zero = 0;
int var_15 = -351278711;
unsigned char var_16 = (unsigned char)44;
unsigned long long int var_17 = 2425420452573082168ULL;
long long int var_18 = -8981197689683944024LL;
int var_19 = -97320946;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1149449173037340036LL;
long long int var_22 = 8653270552686774280LL;
unsigned short var_23 = (unsigned short)25710;
unsigned short var_24 = (unsigned short)23696;
long long int var_25 = 911161028483946867LL;
unsigned char var_26 = (unsigned char)19;
unsigned char var_27 = (unsigned char)126;
unsigned long long int arr_1 [24] ;
unsigned short arr_2 [24] [24] [24] ;
long long int arr_4 [24] [24] ;
unsigned long long int arr_19 [22] ;
_Bool arr_21 [22] [22] [22] ;
int arr_23 [22] [22] ;
signed char arr_5 [24] [24] ;
long long int arr_41 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7286169486353794793ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)30060;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = -2320087272090933027LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 15647215827544307893ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = -2009396395;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? -305241165649142253LL : 8253198649559817869LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
