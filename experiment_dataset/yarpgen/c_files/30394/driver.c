#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7342639423275699191LL;
long long int var_4 = -3741666179410303425LL;
int zero = 0;
long long int var_17 = 922503830068927605LL;
unsigned short var_18 = (unsigned short)10639;
short var_19 = (short)-32735;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
