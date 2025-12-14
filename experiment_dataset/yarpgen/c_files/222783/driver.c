#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1602990801;
unsigned int var_2 = 2265990049U;
long long int var_4 = 3390772308943260568LL;
unsigned char var_5 = (unsigned char)190;
long long int var_6 = 5219115311910425111LL;
unsigned char var_8 = (unsigned char)147;
long long int var_11 = 6180371030133094017LL;
long long int var_12 = 4890632995051112170LL;
int zero = 0;
signed char var_13 = (signed char)-36;
short var_14 = (short)-21553;
long long int var_15 = -8490749709336645444LL;
unsigned char var_16 = (unsigned char)252;
unsigned long long int var_17 = 7184765178355140747ULL;
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
