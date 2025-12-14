#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2931302730U;
unsigned int var_5 = 3845656174U;
unsigned short var_10 = (unsigned short)24631;
int zero = 0;
int var_11 = -294091367;
int var_12 = -1096920876;
int var_13 = -600492977;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
