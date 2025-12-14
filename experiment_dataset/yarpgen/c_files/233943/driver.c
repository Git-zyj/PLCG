#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1269528625U;
long long int var_6 = 7605742118962375371LL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 17043435516521812293ULL;
int zero = 0;
long long int var_19 = -1537442211929671556LL;
signed char var_20 = (signed char)-48;
void init() {
}

void checksum() {
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
