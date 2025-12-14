#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)47;
short var_19 = (short)-993;
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
