#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15912316474794206206ULL;
signed char var_5 = (signed char)-82;
unsigned char var_7 = (unsigned char)77;
unsigned short var_12 = (unsigned short)36520;
unsigned char var_14 = (unsigned char)29;
long long int var_16 = 6422007892558483503LL;
int zero = 0;
unsigned short var_17 = (unsigned short)26703;
unsigned short var_18 = (unsigned short)56824;
_Bool var_19 = (_Bool)0;
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
