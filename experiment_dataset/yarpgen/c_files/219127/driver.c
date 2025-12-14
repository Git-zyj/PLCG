#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55143;
short var_8 = (short)-23779;
short var_10 = (short)-20108;
unsigned int var_12 = 2568592296U;
int zero = 0;
short var_14 = (short)4573;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7281241312876146585LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
