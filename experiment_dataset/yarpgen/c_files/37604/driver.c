#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)115;
unsigned short var_6 = (unsigned short)13175;
unsigned char var_7 = (unsigned char)135;
int var_10 = -565218097;
unsigned short var_12 = (unsigned short)41001;
int zero = 0;
unsigned char var_16 = (unsigned char)149;
unsigned char var_17 = (unsigned char)244;
short var_18 = (short)-13597;
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
