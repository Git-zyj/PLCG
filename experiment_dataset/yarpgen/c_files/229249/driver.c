#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9174019064948686969ULL;
unsigned short var_4 = (unsigned short)6573;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15771792645644429666ULL;
short var_15 = (short)-16719;
unsigned long long int var_16 = 689772110010018654ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
