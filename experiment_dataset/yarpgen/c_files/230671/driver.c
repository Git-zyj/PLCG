#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22899;
unsigned char var_3 = (unsigned char)157;
int var_5 = 1622065889;
short var_6 = (short)-16564;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int var_12 = 1529074166;
int var_16 = 564596113;
long long int var_18 = 1363137336363417925LL;
int zero = 0;
short var_19 = (short)10330;
int var_20 = 1936016974;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
