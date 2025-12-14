#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3693413695U;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)40030;
unsigned int var_7 = 1654231167U;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
unsigned char var_13 = (unsigned char)79;
signed char var_14 = (signed char)7;
unsigned char var_15 = (unsigned char)236;
unsigned int var_16 = 4166788525U;
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
