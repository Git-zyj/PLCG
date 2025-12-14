#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11010313702364466312ULL;
long long int var_2 = -7315394132665790893LL;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-76;
signed char var_8 = (signed char)-84;
short var_9 = (short)-29010;
int zero = 0;
signed char var_13 = (signed char)63;
short var_14 = (short)-13077;
int var_15 = -175696597;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
