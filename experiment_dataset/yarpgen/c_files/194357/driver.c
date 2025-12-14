#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1025809002;
unsigned int var_1 = 1737942383U;
short var_6 = (short)-13793;
unsigned char var_10 = (unsigned char)190;
int zero = 0;
unsigned char var_12 = (unsigned char)116;
long long int var_13 = -584524853462326466LL;
unsigned char var_14 = (unsigned char)166;
long long int var_15 = -1918338965711705557LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
