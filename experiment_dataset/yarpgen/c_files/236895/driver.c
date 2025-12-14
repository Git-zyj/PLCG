#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16640;
unsigned short var_4 = (unsigned short)14992;
unsigned int var_5 = 393494184U;
unsigned int var_6 = 2144526306U;
unsigned int var_7 = 4104135608U;
long long int var_9 = 5620708992996997779LL;
unsigned long long int var_10 = 6903606978986359211ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
short var_14 = (short)28398;
unsigned short var_15 = (unsigned short)50593;
short var_16 = (short)-12415;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
