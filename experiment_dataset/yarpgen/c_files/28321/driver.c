#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1089915511;
unsigned int var_2 = 2423689560U;
int var_4 = -366950720;
short var_15 = (short)5721;
int zero = 0;
unsigned long long int var_16 = 7087038298275200450ULL;
unsigned short var_17 = (unsigned short)63957;
unsigned char var_18 = (unsigned char)207;
void init() {
}

void checksum() {
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
