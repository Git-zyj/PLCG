#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 15996089394483972792ULL;
unsigned short var_12 = (unsigned short)11004;
short var_13 = (short)2062;
int zero = 0;
unsigned short var_15 = (unsigned short)21051;
unsigned char var_16 = (unsigned char)249;
long long int var_17 = 4046899234467249263LL;
unsigned long long int var_18 = 4114989747142259226ULL;
int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1171189765;
}

void checksum() {
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
