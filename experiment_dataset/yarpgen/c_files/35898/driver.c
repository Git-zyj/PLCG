#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -8428264202923321740LL;
int var_11 = -1527777441;
_Bool var_14 = (_Bool)0;
unsigned long long int var_17 = 15115450227759768260ULL;
int zero = 0;
signed char var_18 = (signed char)-101;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
int var_21 = -1846460100;
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
