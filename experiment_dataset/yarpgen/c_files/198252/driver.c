#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3158506474331186100LL;
unsigned char var_1 = (unsigned char)69;
long long int var_6 = -6661266354854854524LL;
unsigned char var_7 = (unsigned char)231;
unsigned long long int var_8 = 14139585967661683281ULL;
int zero = 0;
long long int var_12 = 1079639312430087792LL;
long long int var_13 = -7259887194932920825LL;
void init() {
}

void checksum() {
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
