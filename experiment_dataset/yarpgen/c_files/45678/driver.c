#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65438;
unsigned long long int var_6 = 9727156068935224283ULL;
unsigned long long int var_9 = 17381635912719482325ULL;
_Bool var_12 = (_Bool)1;
int var_14 = 1879110811;
int zero = 0;
unsigned long long int var_16 = 3257227620618555865ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -696355828;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
