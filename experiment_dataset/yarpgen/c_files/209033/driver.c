#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1590458181U;
unsigned int var_1 = 1756266280U;
long long int var_5 = 6051645960785999925LL;
int var_6 = -1450659590;
unsigned int var_7 = 2537649975U;
signed char var_8 = (signed char)51;
unsigned int var_10 = 3175721043U;
int zero = 0;
unsigned char var_13 = (unsigned char)211;
signed char var_14 = (signed char)61;
long long int var_15 = 2007153744615358807LL;
unsigned int var_16 = 828125199U;
unsigned int var_17 = 3634069382U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
