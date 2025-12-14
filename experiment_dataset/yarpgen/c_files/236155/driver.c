#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 880467959;
signed char var_4 = (signed char)-7;
long long int var_5 = -3560164194301395638LL;
int zero = 0;
long long int var_10 = 2092562982435338286LL;
long long int var_11 = -6778542362982238579LL;
unsigned int var_12 = 2919352938U;
short var_13 = (short)13773;
unsigned short var_14 = (unsigned short)20160;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
