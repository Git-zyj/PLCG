#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 308899748U;
signed char var_2 = (signed char)27;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 9160826460176721504ULL;
signed char var_6 = (signed char)7;
unsigned short var_12 = (unsigned short)32458;
int zero = 0;
unsigned long long int var_15 = 9644378685770513962ULL;
long long int var_16 = 8025455753829037677LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 8145901089096397316LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
