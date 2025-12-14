#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned long long int var_6 = 5539917915169998175ULL;
unsigned char var_8 = (unsigned char)250;
unsigned short var_12 = (unsigned short)53183;
unsigned short var_13 = (unsigned short)35649;
int zero = 0;
int var_14 = 1543613165;
int var_15 = -419646189;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
