#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)242;
unsigned long long int var_8 = 3419000210915242948ULL;
unsigned long long int var_9 = 7261393720871541784ULL;
unsigned long long int var_10 = 7111283125799284512ULL;
int zero = 0;
unsigned int var_15 = 2070811210U;
int var_16 = -1244020671;
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
