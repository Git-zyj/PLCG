#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14554;
unsigned long long int var_2 = 3780905030298227023ULL;
int var_10 = -402695750;
unsigned long long int var_12 = 3305782313427974130ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)28470;
unsigned short var_15 = (unsigned short)2362;
unsigned short var_16 = (unsigned short)16491;
unsigned long long int var_17 = 4081912604727169444ULL;
unsigned short var_18 = (unsigned short)13261;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
