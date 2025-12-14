#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34167;
unsigned short var_3 = (unsigned short)50474;
_Bool var_8 = (_Bool)1;
signed char var_13 = (signed char)42;
int zero = 0;
short var_15 = (short)10698;
long long int var_16 = 4139587967237996663LL;
short var_17 = (short)-834;
int var_18 = 1473499335;
void init() {
}

void checksum() {
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
