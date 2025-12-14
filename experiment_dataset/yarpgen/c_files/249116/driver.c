#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3204745139055509376ULL;
signed char var_4 = (signed char)11;
long long int var_5 = 5791110552846139718LL;
unsigned short var_7 = (unsigned short)45722;
unsigned long long int var_12 = 3767042904675818512ULL;
int zero = 0;
long long int var_14 = 2537674182061588268LL;
int var_15 = -154938171;
signed char var_16 = (signed char)103;
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
