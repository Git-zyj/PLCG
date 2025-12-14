#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2862499290U;
signed char var_3 = (signed char)94;
unsigned long long int var_9 = 2919518273898470353ULL;
int zero = 0;
unsigned int var_16 = 3170333287U;
unsigned int var_17 = 35647522U;
unsigned char var_18 = (unsigned char)42;
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
