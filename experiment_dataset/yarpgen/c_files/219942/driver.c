#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9744646007363754827ULL;
long long int var_7 = 9109552417206678719LL;
unsigned char var_12 = (unsigned char)35;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -5719506019506832817LL;
long long int var_16 = -2848654739319621571LL;
unsigned char var_17 = (unsigned char)143;
short var_18 = (short)-1379;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
