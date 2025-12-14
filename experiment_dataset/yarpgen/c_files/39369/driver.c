#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6025278823322667189LL;
short var_4 = (short)-14205;
int zero = 0;
long long int var_12 = -5957520199943343463LL;
unsigned char var_13 = (unsigned char)225;
unsigned int var_14 = 2412048068U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
