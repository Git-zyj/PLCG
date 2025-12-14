#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7493;
short var_2 = (short)18150;
unsigned char var_3 = (unsigned char)53;
long long int var_4 = -1769831943029395070LL;
unsigned long long int var_6 = 14800717265241896425ULL;
unsigned char var_7 = (unsigned char)129;
unsigned short var_9 = (unsigned short)29046;
int zero = 0;
unsigned int var_11 = 2581962165U;
signed char var_12 = (signed char)12;
unsigned int var_13 = 2342673113U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
