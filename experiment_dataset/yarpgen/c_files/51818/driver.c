#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2045220807;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 15645237889315379934ULL;
unsigned short var_8 = (unsigned short)21597;
int zero = 0;
unsigned short var_10 = (unsigned short)12862;
unsigned long long int var_11 = 18034218086642139954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
