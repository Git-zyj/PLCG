#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)97;
long long int var_11 = -2830363086281380884LL;
unsigned int var_13 = 1177290781U;
int zero = 0;
short var_17 = (short)27703;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)192;
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
