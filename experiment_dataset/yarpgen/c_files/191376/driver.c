#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)42;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)158;
unsigned char var_7 = (unsigned char)173;
unsigned long long int var_8 = 16106403555746467301ULL;
int zero = 0;
signed char var_12 = (signed char)-89;
unsigned int var_13 = 2210997006U;
unsigned char var_14 = (unsigned char)45;
unsigned char var_15 = (unsigned char)118;
unsigned char var_16 = (unsigned char)89;
unsigned char var_17 = (unsigned char)9;
_Bool var_18 = (_Bool)0;
unsigned long long int arr_2 [13] ;
unsigned long long int arr_3 [13] ;
_Bool arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 6428155583054567098ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 9920449605493920181ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
