#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)24;
signed char var_6 = (signed char)-35;
unsigned char var_7 = (unsigned char)123;
short var_13 = (short)31320;
unsigned int var_15 = 1861277838U;
int zero = 0;
signed char var_16 = (signed char)35;
long long int var_17 = -1173418876009599426LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
