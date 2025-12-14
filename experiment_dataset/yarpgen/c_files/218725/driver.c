#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9965;
short var_3 = (short)25448;
unsigned short var_4 = (unsigned short)40313;
long long int var_5 = -6612523750099313061LL;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3625385210U;
short var_9 = (short)27423;
long long int var_10 = 3909148722508955295LL;
long long int var_12 = 7002092792887250406LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-36;
unsigned long long int var_15 = 14633264965409502468ULL;
unsigned long long int var_16 = 12153997109108858875ULL;
long long int var_17 = -6302522884236094565LL;
_Bool var_18 = (_Bool)0;
int var_19 = -812350604;
short var_20 = (short)-2222;
long long int var_21 = 7105042604176298124LL;
unsigned int var_22 = 2521012414U;
unsigned int var_23 = 4094350652U;
unsigned int var_24 = 230180866U;
unsigned char var_25 = (unsigned char)78;
int arr_0 [15] [15] ;
int arr_1 [15] ;
unsigned char arr_2 [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 2039146155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1783465636;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)32559;
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
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
