#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13860201890984015040ULL;
short var_4 = (short)27174;
int zero = 0;
long long int var_11 = 2900513916633231213LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8489438417495290269ULL;
signed char var_14 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
