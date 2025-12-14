#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 2071049429;
unsigned long long int var_9 = 2220272921388434474ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 826436870;
unsigned char var_13 = (unsigned char)153;
unsigned char var_14 = (unsigned char)169;
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
