#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned char var_5 = (unsigned char)242;
signed char var_7 = (signed char)-88;
signed char var_8 = (signed char)-59;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_14 = (short)11279;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
