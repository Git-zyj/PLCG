#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 174326551145633179ULL;
unsigned long long int var_2 = 6211221735722566278ULL;
_Bool var_3 = (_Bool)0;
long long int var_8 = 2031984814436649189LL;
unsigned long long int var_11 = 2837338788245857186ULL;
int var_12 = 1494518114;
_Bool var_14 = (_Bool)0;
unsigned long long int var_17 = 9139505785793806975ULL;
int zero = 0;
signed char var_18 = (signed char)-72;
unsigned long long int var_19 = 17870710264633634642ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
