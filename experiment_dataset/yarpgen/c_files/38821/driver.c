#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 16041058183428845899ULL;
short var_12 = (short)-14479;
int zero = 0;
long long int var_15 = -2529754044218209577LL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 16116017082268050448ULL;
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
