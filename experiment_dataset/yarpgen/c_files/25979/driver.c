#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 322510876;
unsigned long long int var_16 = 14291290831889415275ULL;
int zero = 0;
unsigned long long int var_17 = 11672696610811927272ULL;
unsigned short var_18 = (unsigned short)18930;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
