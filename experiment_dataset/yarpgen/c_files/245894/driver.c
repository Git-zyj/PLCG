#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-13;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)0;
int var_10 = 1382344144;
int zero = 0;
short var_11 = (short)-25327;
long long int var_12 = -6667915336101006166LL;
unsigned int var_13 = 1422708293U;
void init() {
}

void checksum() {
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
