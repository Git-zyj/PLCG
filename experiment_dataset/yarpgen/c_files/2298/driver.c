#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1501682170;
unsigned char var_3 = (unsigned char)23;
unsigned char var_5 = (unsigned char)19;
int var_6 = 724280025;
long long int var_13 = -7644304768016694331LL;
unsigned char var_14 = (unsigned char)71;
_Bool var_15 = (_Bool)1;
unsigned int var_18 = 4044927419U;
int zero = 0;
int var_19 = -1177422669;
unsigned int var_20 = 958253186U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
