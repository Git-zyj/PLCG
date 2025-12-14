#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
unsigned int var_5 = 2943165838U;
unsigned int var_8 = 1945278279U;
long long int var_10 = -5109923421629101767LL;
int zero = 0;
long long int var_14 = -2638393636254693853LL;
unsigned int var_15 = 1190011202U;
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
