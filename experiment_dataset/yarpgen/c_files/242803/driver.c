#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56984;
short var_8 = (short)29988;
short var_9 = (short)1485;
unsigned short var_13 = (unsigned short)55612;
unsigned long long int var_17 = 12281913087740600983ULL;
int zero = 0;
unsigned int var_18 = 1981467498U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
