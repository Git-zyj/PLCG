#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5737804364985560935LL;
unsigned int var_3 = 1452518703U;
unsigned int var_7 = 872944680U;
unsigned char var_8 = (unsigned char)89;
long long int var_9 = 7858445072195137184LL;
signed char var_11 = (signed char)68;
short var_12 = (short)17169;
unsigned int var_13 = 1934351179U;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-94;
int var_17 = -164548527;
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
