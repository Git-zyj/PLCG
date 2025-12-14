#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4889273339214454621LL;
unsigned int var_4 = 3139703605U;
long long int var_5 = 2463924088226520268LL;
unsigned char var_6 = (unsigned char)53;
long long int var_9 = -6231110749094743023LL;
long long int var_11 = -8271726276588734362LL;
int zero = 0;
signed char var_12 = (signed char)22;
short var_13 = (short)-3974;
unsigned short var_14 = (unsigned short)5463;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
