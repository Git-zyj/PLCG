#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1123465084;
unsigned long long int var_1 = 16084625142986290385ULL;
signed char var_4 = (signed char)89;
unsigned char var_5 = (unsigned char)159;
unsigned short var_6 = (unsigned short)9577;
short var_8 = (short)10678;
int var_9 = -647274982;
short var_10 = (short)-12386;
int zero = 0;
unsigned int var_11 = 1809615139U;
unsigned short var_12 = (unsigned short)54220;
int var_13 = 1476579873;
signed char var_14 = (signed char)100;
long long int var_15 = 6966165662806530975LL;
unsigned short var_16 = (unsigned short)31824;
unsigned short var_17 = (unsigned short)36388;
unsigned short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)25122;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
