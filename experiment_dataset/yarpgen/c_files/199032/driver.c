#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)4183;
unsigned int var_5 = 3120739948U;
unsigned short var_8 = (unsigned short)35407;
unsigned char var_12 = (unsigned char)250;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)53775;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4027134045U;
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
