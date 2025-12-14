#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
unsigned int var_3 = 3747990769U;
short var_5 = (short)-2282;
unsigned long long int var_6 = 3462152173587715756ULL;
short var_7 = (short)-24505;
unsigned short var_9 = (unsigned short)58626;
unsigned short var_11 = (unsigned short)50193;
short var_12 = (short)-19784;
unsigned char var_13 = (unsigned char)32;
unsigned long long int var_14 = 12254606584449807617ULL;
unsigned char var_15 = (unsigned char)152;
short var_16 = (short)-18563;
int zero = 0;
unsigned char var_19 = (unsigned char)39;
unsigned long long int var_20 = 620180244856274248ULL;
unsigned long long int var_21 = 16311709928062894438ULL;
short var_22 = (short)9982;
unsigned char var_23 = (unsigned char)253;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)43429;
int var_26 = -1840229094;
long long int var_27 = -7242492396290836011LL;
unsigned long long int arr_0 [14] [14] ;
signed char arr_5 [14] [14] [14] ;
unsigned int arr_6 [14] [14] [14] ;
unsigned int arr_7 [14] ;
unsigned int arr_9 [14] [14] ;
unsigned char arr_10 [14] ;
_Bool arr_12 [14] ;
unsigned char arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 111807375472530096ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1883575907U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 3268609930U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 852272516U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (unsigned char)18;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
