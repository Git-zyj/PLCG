#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15789;
int var_5 = -1983661388;
int var_6 = -1613180361;
unsigned long long int var_9 = 15128037596194343490ULL;
int var_15 = 1285928045;
int zero = 0;
unsigned short var_17 = (unsigned short)22504;
int var_18 = 532241206;
void init() {
}

void checksum() {
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
