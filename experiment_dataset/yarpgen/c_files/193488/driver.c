#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)75;
unsigned char var_7 = (unsigned char)159;
long long int var_8 = 1537690327611133935LL;
unsigned int var_14 = 1050275425U;
int zero = 0;
short var_15 = (short)27478;
unsigned long long int var_16 = 2871447599572962911ULL;
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
