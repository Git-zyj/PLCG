#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59391;
short var_3 = (short)16103;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)52431;
unsigned int var_12 = 3141221531U;
unsigned int var_13 = 2325805339U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
