#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
short var_4 = (short)11849;
unsigned char var_5 = (unsigned char)96;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)52529;
unsigned long long int var_15 = 7731482647800493520ULL;
signed char var_16 = (signed char)-88;
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
