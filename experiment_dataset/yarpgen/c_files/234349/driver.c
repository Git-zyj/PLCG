#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
_Bool var_2 = (_Bool)0;
int var_10 = -1781236524;
int var_11 = 599995309;
signed char var_12 = (signed char)(-127 - 1);
long long int var_16 = -8783307182340937526LL;
int zero = 0;
unsigned int var_17 = 1398567490U;
int var_18 = -1304333900;
long long int var_19 = 1392871599226229520LL;
void init() {
}

void checksum() {
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
