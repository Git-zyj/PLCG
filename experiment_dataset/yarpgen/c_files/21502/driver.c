#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
signed char var_4 = (signed char)45;
signed char var_5 = (signed char)37;
signed char var_12 = (signed char)62;
int zero = 0;
unsigned long long int var_13 = 11376736537580006426ULL;
short var_14 = (short)-16738;
void init() {
}

void checksum() {
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
