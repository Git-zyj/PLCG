#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_6 = -4461898431250100136LL;
short var_7 = (short)18103;
unsigned long long int var_9 = 12946798107834269981ULL;
short var_11 = (short)-10009;
unsigned long long int var_12 = 13062946219297429232ULL;
int zero = 0;
int var_16 = 1386407158;
unsigned int var_17 = 2512561396U;
int var_18 = 113565300;
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
