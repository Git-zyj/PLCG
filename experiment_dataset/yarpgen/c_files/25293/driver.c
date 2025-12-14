#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 373319452;
_Bool var_5 = (_Bool)0;
unsigned char var_9 = (unsigned char)121;
int zero = 0;
signed char var_14 = (signed char)29;
int var_15 = 941366700;
long long int var_16 = 1468114413314437779LL;
short var_17 = (short)7230;
short var_18 = (short)13231;
unsigned char var_19 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
