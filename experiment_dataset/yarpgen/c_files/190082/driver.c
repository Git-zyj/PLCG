#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9853;
unsigned int var_1 = 608236839U;
signed char var_2 = (signed char)104;
unsigned int var_3 = 1692418680U;
unsigned int var_4 = 3136213738U;
unsigned int var_6 = 3470206665U;
unsigned int var_8 = 1243054619U;
unsigned short var_9 = (unsigned short)28077;
unsigned short var_10 = (unsigned short)52131;
int zero = 0;
unsigned int var_11 = 2827177536U;
unsigned int var_12 = 1331912835U;
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
