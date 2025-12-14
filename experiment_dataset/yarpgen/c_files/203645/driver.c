#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
int var_2 = 183618270;
unsigned int var_3 = 3301761217U;
unsigned char var_4 = (unsigned char)79;
int var_5 = -444789643;
unsigned long long int var_6 = 14131451825929640398ULL;
signed char var_7 = (signed char)-82;
int var_10 = -638638385;
int zero = 0;
long long int var_11 = 5925939044635758129LL;
int var_12 = 1477267298;
int var_13 = 1200198757;
unsigned int var_14 = 1889721672U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
