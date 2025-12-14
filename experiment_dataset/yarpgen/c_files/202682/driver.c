#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 6474985420391763702LL;
signed char var_4 = (signed char)10;
long long int var_11 = 2154057699943855924LL;
int zero = 0;
int var_13 = 952201988;
long long int var_14 = -7437791860715745649LL;
unsigned int var_15 = 2415016683U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
