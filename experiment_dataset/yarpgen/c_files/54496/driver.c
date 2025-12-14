#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57968;
int var_5 = 1742167528;
unsigned char var_6 = (unsigned char)144;
int var_7 = -1190564469;
unsigned short var_14 = (unsigned short)54692;
int zero = 0;
unsigned short var_17 = (unsigned short)55661;
_Bool var_18 = (_Bool)1;
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
