#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2114475935977326323LL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3877993052U;
unsigned long long int var_15 = 4649242130977120621ULL;
int zero = 0;
int var_17 = -2075731080;
unsigned char var_18 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
