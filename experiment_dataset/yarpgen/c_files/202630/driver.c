#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28709;
unsigned int var_7 = 61232315U;
long long int var_8 = 6475175384673719960LL;
unsigned long long int var_9 = 9564905843734334248ULL;
int var_10 = 989618881;
unsigned char var_13 = (unsigned char)116;
int zero = 0;
unsigned short var_14 = (unsigned short)22513;
long long int var_15 = 7855908860200666992LL;
void init() {
}

void checksum() {
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
