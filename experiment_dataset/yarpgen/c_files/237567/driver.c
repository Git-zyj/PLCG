#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20987;
unsigned long long int var_2 = 14656303845916209019ULL;
long long int var_4 = -1837169836417564927LL;
unsigned long long int var_6 = 12814534678315849213ULL;
unsigned char var_7 = (unsigned char)111;
unsigned long long int var_8 = 2357096714961714617ULL;
unsigned char var_10 = (unsigned char)201;
unsigned int var_11 = 648070292U;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_15 = 324839287;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1546140583262484852LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
