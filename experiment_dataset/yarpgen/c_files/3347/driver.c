#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61741;
int zero = 0;
unsigned int var_13 = 3714641523U;
unsigned short var_14 = (unsigned short)36751;
signed char var_15 = (signed char)-84;
unsigned int var_16 = 4165148027U;
unsigned short var_17 = (unsigned short)5602;
void init() {
}

void checksum() {
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
