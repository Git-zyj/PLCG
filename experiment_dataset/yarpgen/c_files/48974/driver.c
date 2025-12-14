#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2021158910U;
short var_3 = (short)10044;
unsigned char var_4 = (unsigned char)6;
unsigned short var_5 = (unsigned short)41142;
signed char var_8 = (signed char)105;
short var_10 = (short)-1646;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1721124487U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
