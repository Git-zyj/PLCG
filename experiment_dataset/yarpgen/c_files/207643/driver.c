#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2231967634U;
unsigned long long int var_2 = 14094798117867527001ULL;
unsigned int var_3 = 3412545117U;
unsigned short var_6 = (unsigned short)17586;
unsigned long long int var_8 = 9585485224218906795ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)24;
int zero = 0;
signed char var_14 = (signed char)77;
short var_15 = (short)4985;
unsigned int var_16 = 208617055U;
void init() {
}

void checksum() {
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
