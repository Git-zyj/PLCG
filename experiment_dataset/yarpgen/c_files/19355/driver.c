#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)103;
unsigned long long int var_5 = 5433279410037450532ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)1570;
int zero = 0;
long long int var_11 = 3469758827459624591LL;
long long int var_12 = -4455054929591796647LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
