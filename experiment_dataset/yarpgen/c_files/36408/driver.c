#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7724738932278208213LL;
unsigned int var_17 = 2875639676U;
int zero = 0;
short var_19 = (short)6015;
unsigned char var_20 = (unsigned char)152;
unsigned long long int var_21 = 5989960541851681491ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
