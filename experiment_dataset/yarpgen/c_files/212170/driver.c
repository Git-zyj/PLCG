#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5712;
unsigned int var_7 = 1382692823U;
int var_9 = 1382476038;
int zero = 0;
short var_10 = (short)9252;
short var_11 = (short)-31127;
unsigned int var_12 = 2957420134U;
short var_13 = (short)22882;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
