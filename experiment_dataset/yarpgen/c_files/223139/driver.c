#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)157;
unsigned long long int var_1 = 3560065848127813431ULL;
signed char var_4 = (signed char)68;
unsigned long long int var_5 = 8388318633523005249ULL;
long long int var_9 = -6963921633941773854LL;
unsigned short var_10 = (unsigned short)55712;
long long int var_11 = -2831070758475629079LL;
unsigned short var_12 = (unsigned short)28102;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
signed char var_14 = (signed char)-124;
unsigned int var_15 = 2852580497U;
short var_16 = (short)-30245;
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
