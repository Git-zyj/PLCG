#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5088628400390400730LL;
short var_1 = (short)-14046;
unsigned long long int var_5 = 11884295870296771036ULL;
signed char var_6 = (signed char)27;
signed char var_7 = (signed char)84;
int var_8 = -1239811172;
unsigned char var_9 = (unsigned char)171;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)44433;
long long int var_13 = -6689547710926743777LL;
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
