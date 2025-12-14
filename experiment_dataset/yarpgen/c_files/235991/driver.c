#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13458329887235073124ULL;
unsigned short var_2 = (unsigned short)17003;
int var_3 = 1016503636;
_Bool var_6 = (_Bool)1;
int zero = 0;
int var_16 = 357385608;
short var_17 = (short)13711;
signed char var_18 = (signed char)-108;
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
