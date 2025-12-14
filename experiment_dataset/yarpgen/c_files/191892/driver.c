#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned int var_2 = 3583315220U;
unsigned char var_8 = (unsigned char)179;
unsigned short var_11 = (unsigned short)35185;
long long int var_13 = -8523852608077667344LL;
unsigned int var_15 = 3459280488U;
int zero = 0;
int var_18 = 1938802285;
unsigned long long int var_19 = 31660026194908892ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
