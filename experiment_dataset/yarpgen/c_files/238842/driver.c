#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 149584729;
long long int var_12 = -3951564705762180790LL;
unsigned char var_14 = (unsigned char)166;
long long int var_19 = 6570718837623737207LL;
int zero = 0;
long long int var_20 = -2038944170166300358LL;
unsigned int var_21 = 2055378986U;
int var_22 = -1967453577;
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
