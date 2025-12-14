#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 902630930493632807LL;
long long int var_4 = 6528389024930535496LL;
unsigned int var_5 = 178320653U;
unsigned short var_6 = (unsigned short)41703;
signed char var_7 = (signed char)24;
unsigned int var_8 = 2527044058U;
long long int var_13 = -1982278106774043073LL;
int zero = 0;
unsigned short var_15 = (unsigned short)42276;
long long int var_16 = -1002767114939321595LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
