#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)237;
int var_8 = 1423857295;
unsigned long long int var_10 = 17025703064197673549ULL;
unsigned long long int var_14 = 1567353717091878227ULL;
int zero = 0;
int var_17 = -541883520;
short var_18 = (short)2020;
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
