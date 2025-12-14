#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 817896233U;
signed char var_8 = (signed char)98;
int var_13 = 2082095974;
unsigned short var_15 = (unsigned short)50296;
int zero = 0;
unsigned int var_16 = 2357759770U;
int var_17 = -531714377;
unsigned int var_18 = 270161877U;
long long int var_19 = -30426580130653347LL;
short var_20 = (short)-30321;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
