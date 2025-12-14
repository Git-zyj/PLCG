#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5760058994068430660LL;
long long int var_4 = 5874517022293783615LL;
long long int var_5 = 8716177455502413658LL;
int var_7 = -1582497175;
long long int var_8 = -7773930825623409522LL;
unsigned short var_11 = (unsigned short)44115;
int zero = 0;
unsigned char var_17 = (unsigned char)189;
long long int var_18 = -5405962543650876866LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6340194245504600484LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
