#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2796485048535737423ULL;
unsigned char var_3 = (unsigned char)187;
int var_4 = 30586953;
unsigned short var_8 = (unsigned short)13426;
signed char var_9 = (signed char)104;
int var_11 = 934892899;
int var_14 = -1520815274;
int zero = 0;
unsigned long long int var_16 = 10169439651510840823ULL;
long long int var_17 = -1131553940207518721LL;
unsigned int var_18 = 2868799892U;
void init() {
}

void checksum() {
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
