#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2043866967U;
unsigned long long int var_11 = 16294305482096632039ULL;
unsigned long long int var_12 = 4190459489393560992ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)53519;
unsigned int var_18 = 1693522092U;
signed char var_19 = (signed char)-72;
unsigned long long int var_20 = 7226216978442535281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
