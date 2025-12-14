#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45766;
unsigned int var_2 = 3687505912U;
_Bool var_3 = (_Bool)1;
signed char var_12 = (signed char)24;
int zero = 0;
unsigned long long int var_15 = 1494761445586996657ULL;
unsigned int var_16 = 1003434527U;
unsigned int var_17 = 3366957829U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
