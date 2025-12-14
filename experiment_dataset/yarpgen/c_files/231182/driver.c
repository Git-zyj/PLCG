#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = 1535336522;
unsigned char var_18 = (unsigned char)78;
int zero = 0;
short var_20 = (short)32349;
long long int var_21 = -6599102646901270243LL;
unsigned short var_22 = (unsigned short)33341;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
