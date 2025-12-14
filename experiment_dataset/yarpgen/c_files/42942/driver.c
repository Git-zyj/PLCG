#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1264291979;
int var_12 = 1841986515;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-22;
unsigned short var_18 = (unsigned short)26699;
unsigned short var_19 = (unsigned short)59062;
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
