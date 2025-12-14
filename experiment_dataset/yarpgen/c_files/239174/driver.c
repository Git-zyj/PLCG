#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)48;
unsigned long long int var_4 = 5761128627870857589ULL;
unsigned char var_12 = (unsigned char)88;
unsigned long long int var_14 = 15747882883551734386ULL;
int zero = 0;
unsigned long long int var_16 = 16057385993573317888ULL;
unsigned short var_17 = (unsigned short)56785;
void init() {
}

void checksum() {
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
