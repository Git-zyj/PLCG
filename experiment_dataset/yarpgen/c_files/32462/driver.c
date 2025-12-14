#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)98;
long long int var_7 = 6235169669133465924LL;
unsigned int var_12 = 591435814U;
unsigned char var_15 = (unsigned char)75;
int zero = 0;
int var_16 = 286180158;
unsigned int var_17 = 1171206956U;
long long int var_18 = -2802084205360526698LL;
long long int var_19 = -6805786461844506333LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
