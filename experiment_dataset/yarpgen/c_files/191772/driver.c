#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5619105868333882416ULL;
long long int var_9 = 8008731615937954990LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = -6782147442743338511LL;
short var_16 = (short)11755;
void init() {
}

void checksum() {
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
