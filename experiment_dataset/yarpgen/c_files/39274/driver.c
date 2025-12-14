#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1226681588U;
signed char var_6 = (signed char)59;
unsigned char var_12 = (unsigned char)252;
short var_14 = (short)-17504;
int zero = 0;
short var_15 = (short)-5168;
signed char var_16 = (signed char)-94;
long long int var_17 = 2838075523141983906LL;
signed char var_18 = (signed char)-73;
unsigned long long int var_19 = 11685636242315520289ULL;
unsigned char var_20 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
