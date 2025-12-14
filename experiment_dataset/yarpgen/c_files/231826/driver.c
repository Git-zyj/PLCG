#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14130652122866057926ULL;
unsigned int var_11 = 3013448179U;
int zero = 0;
unsigned short var_20 = (unsigned short)21714;
unsigned short var_21 = (unsigned short)5017;
unsigned short var_22 = (unsigned short)51022;
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
