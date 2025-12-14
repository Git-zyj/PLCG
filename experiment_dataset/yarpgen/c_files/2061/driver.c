#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1701283924197735994LL;
int var_11 = 1185841302;
unsigned long long int var_13 = 10862310678973725672ULL;
int zero = 0;
unsigned long long int var_14 = 17209774350587602115ULL;
int var_15 = -1626774670;
unsigned short var_16 = (unsigned short)49585;
int var_17 = 294428059;
void init() {
}

void checksum() {
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
