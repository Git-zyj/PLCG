#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
short var_3 = (short)-612;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)44688;
unsigned char var_11 = (unsigned char)149;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1050779798U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
