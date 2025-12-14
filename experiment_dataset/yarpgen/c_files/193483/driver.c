#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3617863604U;
unsigned int var_4 = 166087081U;
signed char var_5 = (signed char)-39;
short var_7 = (short)-7519;
unsigned int var_16 = 2091689872U;
int zero = 0;
short var_17 = (short)17204;
signed char var_18 = (signed char)18;
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
