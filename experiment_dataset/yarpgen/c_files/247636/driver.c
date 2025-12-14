#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6969398999253275698LL;
unsigned long long int var_3 = 16164786764134815799ULL;
signed char var_4 = (signed char)-7;
unsigned int var_9 = 3671364649U;
unsigned long long int var_10 = 15266605044395172516ULL;
int zero = 0;
unsigned long long int var_13 = 16585950818824326867ULL;
short var_14 = (short)1459;
long long int var_15 = 7192714628570379368LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
