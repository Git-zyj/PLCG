#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 51175302U;
short var_8 = (short)10107;
int var_9 = -1722029553;
int zero = 0;
long long int var_13 = -2324044435392582013LL;
unsigned long long int var_14 = 4021129943461958536ULL;
short var_15 = (short)-14517;
void init() {
}

void checksum() {
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
