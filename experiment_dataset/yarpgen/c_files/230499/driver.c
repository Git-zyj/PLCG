#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1810892305U;
short var_2 = (short)19482;
unsigned short var_3 = (unsigned short)20004;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-6271;
int zero = 0;
unsigned int var_12 = 2988786157U;
signed char var_13 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
