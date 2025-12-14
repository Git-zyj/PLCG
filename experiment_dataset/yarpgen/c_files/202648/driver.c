#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8537805980128263324LL;
unsigned char var_3 = (unsigned char)103;
_Bool var_6 = (_Bool)0;
long long int var_9 = 116679744315501646LL;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
