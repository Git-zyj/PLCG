#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8731310484809942133ULL;
int var_2 = -15272900;
signed char var_6 = (signed char)(-127 - 1);
unsigned long long int var_13 = 2404801644776331940ULL;
short var_14 = (short)-28971;
unsigned short var_15 = (unsigned short)43593;
int var_18 = 771742703;
int zero = 0;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
