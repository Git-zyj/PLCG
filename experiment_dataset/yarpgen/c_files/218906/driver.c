#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3423465889022621456LL;
unsigned short var_7 = (unsigned short)14928;
long long int var_10 = 539620839958441530LL;
signed char var_13 = (signed char)67;
unsigned short var_14 = (unsigned short)33007;
int zero = 0;
short var_18 = (short)30934;
short var_19 = (short)-13042;
long long int var_20 = -7945594166382171998LL;
short var_21 = (short)-3400;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
