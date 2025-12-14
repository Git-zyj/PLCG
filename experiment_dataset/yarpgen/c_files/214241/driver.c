#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)5;
int var_7 = 1543172996;
unsigned long long int var_8 = 14763116836856619736ULL;
int var_11 = -1710410618;
long long int var_12 = 973608218601942544LL;
unsigned int var_18 = 409173257U;
int zero = 0;
long long int var_19 = 904074964205326012LL;
long long int var_20 = 1682960367010396450LL;
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
