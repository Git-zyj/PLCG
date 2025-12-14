#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)27;
unsigned int var_3 = 1600159124U;
unsigned long long int var_5 = 11706678839183801335ULL;
long long int var_7 = -7840102083552795678LL;
unsigned int var_8 = 4059633533U;
unsigned int var_10 = 4180455111U;
unsigned long long int var_11 = 5953597477799018801ULL;
int zero = 0;
short var_12 = (short)26310;
unsigned long long int var_13 = 14778163794938959530ULL;
void init() {
}

void checksum() {
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
