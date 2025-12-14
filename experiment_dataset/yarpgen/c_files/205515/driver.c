#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-116;
unsigned short var_14 = (unsigned short)40970;
long long int var_15 = 5349331514862290636LL;
unsigned long long int var_18 = 9507809518374722396ULL;
int zero = 0;
long long int var_19 = -8234280937926374034LL;
_Bool var_20 = (_Bool)1;
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
