#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1641341441U;
unsigned char var_3 = (unsigned char)179;
unsigned int var_5 = 1306839573U;
unsigned short var_7 = (unsigned short)45016;
unsigned short var_8 = (unsigned short)59946;
int zero = 0;
signed char var_12 = (signed char)31;
unsigned int var_13 = 2248385301U;
long long int var_14 = -2549954939450630624LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
