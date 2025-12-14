#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22844;
unsigned long long int var_1 = 8267602353696872844ULL;
signed char var_3 = (signed char)-78;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 545358838U;
signed char var_6 = (signed char)45;
int var_7 = 907080498;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)47443;
unsigned short var_10 = (unsigned short)61915;
int var_12 = -762117842;
unsigned char var_13 = (unsigned char)9;
unsigned char var_14 = (unsigned char)83;
int var_15 = 550420478;
long long int var_16 = -175459761139364236LL;
short var_17 = (short)2789;
unsigned short var_18 = (unsigned short)11308;
int zero = 0;
unsigned long long int var_19 = 11995693696816606799ULL;
short var_20 = (short)5652;
int var_21 = -1867110321;
unsigned long long int var_22 = 6645624739388273002ULL;
unsigned short var_23 = (unsigned short)21756;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)23758;
unsigned int var_26 = 838473644U;
unsigned char var_27 = (unsigned char)200;
unsigned int var_28 = 1746398871U;
unsigned long long int var_29 = 16455018054395528268ULL;
unsigned short arr_0 [23] [23] ;
int arr_1 [23] ;
unsigned int arr_2 [23] ;
unsigned long long int arr_3 [23] [23] ;
int arr_4 [23] ;
long long int arr_5 [23] ;
short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)35860;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -1796074050;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1041515248U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1659673577006236265ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 2000283457;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2574853390832031688LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)31029;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
