#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13087;
short var_2 = (short)14328;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)9318;
unsigned char var_9 = (unsigned char)224;
int zero = 0;
short var_16 = (short)7210;
signed char var_17 = (signed char)30;
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
