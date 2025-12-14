#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2995154261U;
int var_2 = -2047595404;
short var_3 = (short)20110;
long long int var_4 = 9108976694017791628LL;
long long int var_7 = -2916142885525605898LL;
int var_9 = -1683701796;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -406464991;
unsigned short var_12 = (unsigned short)47547;
signed char var_13 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
