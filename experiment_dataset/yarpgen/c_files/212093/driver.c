#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)133;
long long int var_5 = -7876475406897647164LL;
unsigned char var_7 = (unsigned char)158;
long long int var_9 = -1281899126734901617LL;
int zero = 0;
unsigned long long int var_13 = 12713809150485595134ULL;
unsigned int var_14 = 1666648973U;
unsigned char var_15 = (unsigned char)130;
short var_16 = (short)31168;
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
