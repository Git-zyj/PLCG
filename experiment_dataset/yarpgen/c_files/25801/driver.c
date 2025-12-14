#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -1054949013;
unsigned char var_13 = (unsigned char)37;
int var_14 = -1682031455;
unsigned int var_16 = 3090800063U;
unsigned long long int var_17 = 11503662161644534583ULL;
int zero = 0;
short var_18 = (short)9156;
unsigned long long int var_19 = 4084025260530252909ULL;
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
