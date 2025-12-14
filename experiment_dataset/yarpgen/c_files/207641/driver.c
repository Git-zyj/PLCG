#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)42;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)23049;
short var_12 = (short)-28713;
long long int var_13 = 8641901698021495564LL;
int zero = 0;
unsigned char var_15 = (unsigned char)149;
unsigned int var_16 = 1061412040U;
void init() {
}

void checksum() {
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
