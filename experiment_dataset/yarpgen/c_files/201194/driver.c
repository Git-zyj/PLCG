#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3081410479U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 10777827591404812668ULL;
unsigned char var_10 = (unsigned char)121;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 13137549982287152528ULL;
unsigned long long int var_19 = 9928766155435411976ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)240;
unsigned int var_21 = 785221096U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)239;
short var_24 = (short)10855;
unsigned long long int var_25 = 12513261029515681668ULL;
long long int arr_0 [21] [21] ;
_Bool arr_1 [21] [21] ;
short arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 6330927969076978530LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)23345 : (short)-31426;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
