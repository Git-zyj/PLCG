#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
int var_6 = -1101171216;
short var_11 = (short)1524;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 1555074961920884721ULL;
unsigned int var_16 = 3286705901U;
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
