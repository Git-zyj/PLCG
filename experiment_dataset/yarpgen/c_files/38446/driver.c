#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2619;
long long int var_7 = 4305783836412874485LL;
int var_13 = 1218681041;
unsigned long long int var_14 = 12752482372797203328ULL;
unsigned short var_15 = (unsigned short)17516;
int zero = 0;
unsigned int var_18 = 3561033135U;
unsigned int var_19 = 853028512U;
void init() {
}

void checksum() {
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
