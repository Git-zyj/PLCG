#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
unsigned short var_6 = (unsigned short)31535;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 957458380U;
unsigned char var_16 = (unsigned char)244;
signed char var_17 = (signed char)-71;
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
