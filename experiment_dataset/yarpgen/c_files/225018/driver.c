#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50003;
long long int var_4 = 862501809114641114LL;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)34515;
int zero = 0;
signed char var_16 = (signed char)-58;
short var_17 = (short)1786;
short var_18 = (short)-12996;
unsigned short var_19 = (unsigned short)29530;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
