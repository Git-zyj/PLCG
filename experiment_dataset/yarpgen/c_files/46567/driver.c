#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17848;
unsigned long long int var_2 = 7759402958173127664ULL;
short var_5 = (short)-23317;
_Bool var_7 = (_Bool)0;
short var_11 = (short)5492;
int zero = 0;
signed char var_16 = (signed char)-49;
unsigned short var_17 = (unsigned short)8261;
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
