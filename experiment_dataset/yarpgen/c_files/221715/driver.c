#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28267;
short var_4 = (short)14392;
signed char var_5 = (signed char)-60;
unsigned int var_7 = 498680530U;
long long int var_9 = 3209938149641839225LL;
int zero = 0;
unsigned int var_14 = 3680036427U;
unsigned long long int var_15 = 4757371164242854831ULL;
unsigned int var_16 = 2927549539U;
unsigned int var_17 = 4009250376U;
long long int var_18 = 6400677159395817100LL;
void init() {
}

void checksum() {
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
