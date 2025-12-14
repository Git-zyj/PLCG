#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1031286455;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)113;
int var_12 = 1369444406;
unsigned int var_15 = 4062952305U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12384154158371854920ULL;
_Bool var_22 = (_Bool)1;
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
