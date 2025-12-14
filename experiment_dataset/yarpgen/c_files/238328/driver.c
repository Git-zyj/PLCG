#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 115782603U;
long long int var_6 = -3354455035804908066LL;
int var_8 = 1526850218;
long long int var_9 = 2971224821439885275LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 10335953129888409291ULL;
unsigned short var_13 = (unsigned short)6460;
signed char var_14 = (signed char)5;
long long int var_15 = 6456529152445372956LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
