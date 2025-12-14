#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10810569702411387874ULL;
short var_1 = (short)-3261;
int var_3 = 552195673;
unsigned short var_4 = (unsigned short)42735;
unsigned char var_8 = (unsigned char)95;
unsigned int var_9 = 3530632945U;
int zero = 0;
long long int var_10 = -8770697536703979508LL;
unsigned int var_11 = 4016972693U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
