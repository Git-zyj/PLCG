#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6813;
int var_5 = 363658977;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 8471604730202220312ULL;
short var_13 = (short)-30553;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
