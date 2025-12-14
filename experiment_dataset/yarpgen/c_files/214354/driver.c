#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 313443612;
int var_6 = 1329473860;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-112;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1997970428U;
short var_17 = (short)-30633;
unsigned long long int var_18 = 1705119752280085948ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)61;
unsigned long long int var_20 = 13138787782274687473ULL;
signed char var_21 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
