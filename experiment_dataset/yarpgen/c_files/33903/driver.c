#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-67;
unsigned short var_7 = (unsigned short)36478;
signed char var_8 = (signed char)-11;
signed char var_10 = (signed char)-120;
signed char var_11 = (signed char)28;
unsigned long long int var_12 = 13967544999421782504ULL;
long long int var_13 = -6648492356588895178LL;
signed char var_14 = (signed char)-37;
int zero = 0;
short var_17 = (short)-9776;
signed char var_18 = (signed char)44;
signed char var_19 = (signed char)74;
unsigned short var_20 = (unsigned short)19919;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
