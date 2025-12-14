#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50290;
unsigned int var_3 = 2095120829U;
int var_8 = 1625657006;
long long int var_9 = -8139574659898715221LL;
unsigned short var_10 = (unsigned short)17396;
int var_11 = -891407854;
unsigned long long int var_12 = 18321166327321225317ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)5231;
int var_14 = -1707970655;
short var_15 = (short)32541;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
