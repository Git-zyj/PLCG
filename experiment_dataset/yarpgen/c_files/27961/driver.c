#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
int var_3 = -2076058232;
unsigned int var_4 = 2474535705U;
unsigned int var_7 = 739951578U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 148050965836584730ULL;
int zero = 0;
signed char var_15 = (signed char)4;
int var_16 = -1453640256;
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
