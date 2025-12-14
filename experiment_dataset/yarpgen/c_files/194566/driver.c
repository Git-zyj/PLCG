#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1589845069;
long long int var_6 = -1904553629968374867LL;
long long int var_7 = 9069740407584668881LL;
short var_8 = (short)25793;
unsigned char var_10 = (unsigned char)196;
int var_12 = 1212269511;
int var_15 = 1392491670;
int zero = 0;
unsigned short var_16 = (unsigned short)18363;
unsigned int var_17 = 2302532600U;
_Bool var_18 = (_Bool)1;
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
