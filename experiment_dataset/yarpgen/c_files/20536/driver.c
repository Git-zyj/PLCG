#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55743;
unsigned long long int var_1 = 14434739891455736615ULL;
long long int var_3 = -4146801845999606031LL;
int var_12 = -1249513;
short var_17 = (short)-25682;
int zero = 0;
unsigned int var_19 = 2919378909U;
int var_20 = 918424003;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
