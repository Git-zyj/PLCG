#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1671004080U;
_Bool var_8 = (_Bool)0;
int var_9 = 1811631811;
int zero = 0;
unsigned short var_11 = (unsigned short)61517;
unsigned long long int var_12 = 1472964459622178442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
