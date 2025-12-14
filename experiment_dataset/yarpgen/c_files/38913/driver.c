#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-20744;
long long int var_5 = 4657155042224364404LL;
int var_6 = 880415248;
short var_7 = (short)22069;
short var_8 = (short)1985;
short var_9 = (short)9654;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-124;
signed char var_14 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
