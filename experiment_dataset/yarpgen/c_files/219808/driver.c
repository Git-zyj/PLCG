#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28275;
signed char var_5 = (signed char)125;
long long int var_6 = 8428585197131805600LL;
unsigned long long int var_10 = 12885295153320752705ULL;
int zero = 0;
unsigned int var_11 = 262631236U;
unsigned int var_12 = 4092949654U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
