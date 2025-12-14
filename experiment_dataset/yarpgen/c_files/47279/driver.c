#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62028;
unsigned int var_4 = 834701345U;
unsigned short var_7 = (unsigned short)24881;
unsigned short var_12 = (unsigned short)25988;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)56685;
int zero = 0;
unsigned char var_17 = (unsigned char)90;
short var_18 = (short)-11961;
unsigned long long int var_19 = 12883163807085191173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
