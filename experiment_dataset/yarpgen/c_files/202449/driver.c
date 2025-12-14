#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5672977115822408690LL;
int var_8 = 1911443410;
unsigned int var_10 = 1641797537U;
int zero = 0;
int var_12 = -1305144672;
short var_13 = (short)-24683;
int var_14 = 1471496955;
int var_15 = -1181124415;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
