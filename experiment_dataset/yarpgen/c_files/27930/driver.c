#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3166083156U;
long long int var_1 = 3804485388658241723LL;
signed char var_2 = (signed char)-87;
signed char var_5 = (signed char)56;
unsigned char var_6 = (unsigned char)181;
unsigned int var_9 = 3246195264U;
int zero = 0;
unsigned int var_10 = 936333394U;
long long int var_11 = 8993167967920826312LL;
short var_12 = (short)-29864;
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
