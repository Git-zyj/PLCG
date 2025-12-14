#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 937192192;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-34;
unsigned long long int var_7 = 12256102566775854967ULL;
int var_8 = -101668767;
unsigned char var_9 = (unsigned char)255;
long long int var_13 = -5677948533648490522LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 1699684018339328844ULL;
int var_17 = -2050380125;
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
