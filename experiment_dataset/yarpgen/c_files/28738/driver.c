#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1471516151654473802ULL;
unsigned short var_5 = (unsigned short)49245;
unsigned long long int var_10 = 15435433633058141419ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_17 = (unsigned short)30487;
int zero = 0;
signed char var_20 = (signed char)-51;
short var_21 = (short)-22434;
unsigned short var_22 = (unsigned short)46000;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
