#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)12;
signed char var_5 = (signed char)114;
unsigned short var_8 = (unsigned short)6805;
unsigned char var_11 = (unsigned char)118;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)51408;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 613776460;
int var_19 = 1715882130;
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
