#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16590491228193835866ULL;
signed char var_8 = (signed char)75;
short var_11 = (short)5427;
int zero = 0;
short var_19 = (short)11079;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)10660;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
