#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29190;
short var_1 = (short)-6582;
long long int var_3 = -3863485247091818119LL;
long long int var_4 = 8912404897945162922LL;
unsigned short var_5 = (unsigned short)32321;
long long int var_7 = 1729878802519168474LL;
unsigned long long int var_8 = 3628018700605591374ULL;
long long int var_9 = 5829267470989243636LL;
short var_10 = (short)-25220;
short var_12 = (short)1600;
unsigned char var_14 = (unsigned char)157;
int zero = 0;
unsigned short var_15 = (unsigned short)42154;
short var_16 = (short)-31004;
unsigned int var_17 = 859932370U;
long long int var_18 = -9128738434792915915LL;
_Bool var_19 = (_Bool)0;
int var_20 = -541764201;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)192;
short var_23 = (short)19497;
long long int var_24 = 8320822138277844475LL;
short var_25 = (short)13540;
unsigned short var_26 = (unsigned short)27464;
unsigned long long int var_27 = 5334630110122400886ULL;
short var_28 = (short)28653;
long long int var_29 = -897462661100108612LL;
unsigned short arr_10 [21] [21] [21] [21] ;
unsigned int arr_18 [21] [21] [21] [21] ;
short arr_19 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)45994;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3894033875U : 1735670210U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25734 : (short)-1017;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
