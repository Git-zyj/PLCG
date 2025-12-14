#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1644498300221797493ULL;
int var_4 = 1377238532;
short var_6 = (short)15038;
unsigned int var_8 = 3549402246U;
unsigned int var_12 = 2909760350U;
unsigned short var_16 = (unsigned short)7742;
int zero = 0;
unsigned long long int var_17 = 8474927083972250196ULL;
unsigned char var_18 = (unsigned char)121;
unsigned int var_19 = 1819016807U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
