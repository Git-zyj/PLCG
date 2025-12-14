#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1363928061146733124LL;
unsigned int var_6 = 1947193306U;
_Bool var_10 = (_Bool)1;
int var_11 = -313616996;
unsigned long long int var_14 = 2356432263258302372ULL;
int zero = 0;
unsigned long long int var_20 = 2119531947293833840ULL;
unsigned short var_21 = (unsigned short)55105;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 1259208066U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
