#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 225100121U;
long long int var_3 = 7748118306520713822LL;
int zero = 0;
long long int var_13 = 7642247937128151489LL;
unsigned long long int var_14 = 13692855627820416335ULL;
short var_15 = (short)9794;
short var_16 = (short)23940;
signed char var_17 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
