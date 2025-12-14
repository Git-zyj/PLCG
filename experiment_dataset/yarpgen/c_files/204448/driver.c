#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 612031530;
unsigned char var_7 = (unsigned char)149;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 15691457231213209281ULL;
int zero = 0;
unsigned int var_14 = 3295060979U;
short var_15 = (short)27730;
unsigned int var_16 = 2927883650U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
