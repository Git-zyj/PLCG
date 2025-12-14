#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1165329459;
signed char var_2 = (signed char)113;
unsigned long long int var_3 = 8981146245036234307ULL;
int var_5 = -791689541;
int var_10 = 1238329842;
signed char var_12 = (signed char)72;
unsigned int var_13 = 4189103298U;
int zero = 0;
unsigned int var_14 = 1565687262U;
unsigned long long int var_15 = 574000748834092563ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2157189719U;
short var_18 = (short)-12075;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
