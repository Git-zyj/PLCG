#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9617;
long long int var_4 = -1216818860613861025LL;
long long int var_6 = 6863011259421172369LL;
long long int var_8 = 42023838081750579LL;
signed char var_10 = (signed char)-36;
int zero = 0;
long long int var_11 = 7979947866576948433LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2651917552U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
