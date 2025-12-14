#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 819115318U;
unsigned short var_5 = (unsigned short)36204;
signed char var_12 = (signed char)-84;
int zero = 0;
unsigned long long int var_17 = 4392547669483437308ULL;
long long int var_18 = -2440884522907795556LL;
unsigned long long int var_19 = 17165845458884576822ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
