#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -759359407;
unsigned int var_4 = 607591599U;
unsigned char var_9 = (unsigned char)40;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 13063113087364584609ULL;
unsigned int var_19 = 207064828U;
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
