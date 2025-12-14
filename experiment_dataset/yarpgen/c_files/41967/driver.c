#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-122;
short var_9 = (short)12151;
unsigned int var_11 = 2801015583U;
long long int var_15 = -7413567018390149638LL;
int zero = 0;
signed char var_16 = (signed char)92;
signed char var_17 = (signed char)-123;
unsigned int var_18 = 241019165U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
