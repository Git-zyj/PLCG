#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)0;
signed char var_6 = (signed char)52;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-113;
int zero = 0;
short var_16 = (short)29825;
unsigned char var_17 = (unsigned char)195;
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
