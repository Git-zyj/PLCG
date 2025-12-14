#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)14721;
int var_8 = 974836982;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-8;
unsigned char var_15 = (unsigned char)151;
short var_16 = (short)10783;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
