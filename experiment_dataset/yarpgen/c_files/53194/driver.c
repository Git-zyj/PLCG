#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)108;
int var_1 = 1380680585;
signed char var_2 = (signed char)16;
long long int var_3 = 7695928490317750330LL;
unsigned short var_7 = (unsigned short)6537;
unsigned int var_10 = 2475555827U;
int zero = 0;
unsigned int var_11 = 4248940780U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)26402;
_Bool var_14 = (_Bool)0;
long long int var_15 = -4475133320757752073LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
