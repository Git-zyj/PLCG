#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned long long int var_6 = 13908679509391293500ULL;
unsigned char var_7 = (unsigned char)34;
short var_10 = (short)-25311;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)18403;
int zero = 0;
long long int var_15 = -3388326008496081582LL;
unsigned short var_16 = (unsigned short)27652;
unsigned short var_17 = (unsigned short)56343;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
