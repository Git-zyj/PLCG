#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13444789443846202288ULL;
unsigned long long int var_3 = 18298637212889399661ULL;
unsigned long long int var_5 = 3045196951172507853ULL;
unsigned long long int var_7 = 14831746479478263697ULL;
int zero = 0;
short var_10 = (short)18116;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1245748158U;
unsigned long long int var_13 = 14436478726561401903ULL;
unsigned long long int var_14 = 9218572713448056896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
