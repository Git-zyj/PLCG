#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1220689609002908513LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 1578594454988452369LL;
int var_4 = -1563433495;
unsigned char var_5 = (unsigned char)110;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1648025056U;
_Bool var_9 = (_Bool)0;
signed char var_12 = (signed char)-46;
unsigned int var_15 = 1215205661U;
int zero = 0;
signed char var_16 = (signed char)42;
unsigned char var_17 = (unsigned char)122;
long long int var_18 = -31627161134789566LL;
signed char var_19 = (signed char)-7;
unsigned char var_20 = (unsigned char)211;
signed char var_21 = (signed char)-121;
unsigned long long int var_22 = 5304004827727104251ULL;
long long int var_23 = -9078430863969761509LL;
long long int arr_0 [23] [23] ;
unsigned short arr_1 [23] [23] ;
unsigned long long int arr_2 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 4845353736025389469LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)48394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9988894297759121814ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
