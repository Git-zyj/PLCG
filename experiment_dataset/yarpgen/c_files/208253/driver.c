#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 362647426970354554ULL;
int var_4 = -1765566479;
unsigned int var_11 = 1025742363U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 1227989437335540141ULL;
unsigned int var_17 = 745845970U;
unsigned long long int var_18 = 5502274859115199973ULL;
long long int var_19 = 7791527135974556461LL;
unsigned long long int var_20 = 13959979898137319281ULL;
unsigned short arr_1 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)42510;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-43;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
