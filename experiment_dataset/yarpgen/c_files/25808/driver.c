#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9212;
short var_4 = (short)12710;
_Bool var_5 = (_Bool)1;
long long int var_7 = -5870022577833688516LL;
int zero = 0;
short var_10 = (short)-3616;
short var_11 = (short)-11841;
short var_12 = (short)-24984;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
