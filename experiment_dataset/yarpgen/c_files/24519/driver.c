#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3659054146890237921LL;
int var_2 = -1123448596;
signed char var_3 = (signed char)26;
short var_4 = (short)6786;
unsigned short var_7 = (unsigned short)34855;
unsigned short var_8 = (unsigned short)6581;
unsigned char var_9 = (unsigned char)93;
unsigned short var_11 = (unsigned short)9820;
unsigned long long int var_12 = 12503337385754563065ULL;
unsigned long long int var_13 = 3071544974424495312ULL;
int zero = 0;
unsigned long long int var_14 = 10519087933234651511ULL;
long long int var_15 = -1592462582429599702LL;
signed char var_16 = (signed char)88;
unsigned char var_17 = (unsigned char)236;
_Bool var_18 = (_Bool)0;
short var_19 = (short)31592;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 278907314585051608ULL;
int var_22 = 1535330175;
unsigned int var_23 = 772147312U;
unsigned long long int var_24 = 5015188949092781821ULL;
long long int arr_0 [11] ;
unsigned int arr_1 [11] ;
_Bool arr_2 [11] [11] ;
long long int arr_4 [11] ;
unsigned long long int arr_8 [11] ;
unsigned short arr_11 [11] [11] ;
long long int arr_12 [11] [11] [11] [11] [11] ;
long long int arr_14 [11] ;
short arr_15 [11] [11] ;
long long int arr_17 [11] [11] ;
unsigned char arr_5 [11] ;
_Bool arr_6 [11] [11] ;
short arr_20 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3198872832297036026LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3017019635U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 472184389756644999LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 7814567030067468857ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)62565;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1090779635192692484LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = -7805423559122496526LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (short)1617;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = -6820301090104133590LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = (short)-23744;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
