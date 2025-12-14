#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
long long int var_11 = -3927166304599514887LL;
unsigned char var_15 = (unsigned char)28;
signed char var_18 = (signed char)1;
unsigned int var_19 = 1270594375U;
int zero = 0;
unsigned int var_20 = 2592635070U;
unsigned long long int var_21 = 1987439572545585520ULL;
signed char var_22 = (signed char)-25;
unsigned int var_23 = 1938956013U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
