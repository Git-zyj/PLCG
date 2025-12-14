#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6779563528832997610ULL;
unsigned char var_2 = (unsigned char)65;
unsigned int var_5 = 4122256044U;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)54036;
unsigned short var_14 = (unsigned short)38534;
unsigned char var_15 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
