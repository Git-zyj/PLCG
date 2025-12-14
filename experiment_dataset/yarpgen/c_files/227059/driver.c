#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 149549985U;
unsigned short var_6 = (unsigned short)39192;
int var_11 = 183211005;
signed char var_12 = (signed char)59;
int zero = 0;
unsigned int var_14 = 513223U;
signed char var_15 = (signed char)41;
long long int var_16 = 6636756497235179638LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
