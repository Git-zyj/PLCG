#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1895062497638101309ULL;
unsigned short var_7 = (unsigned short)55928;
unsigned int var_12 = 2717305454U;
int var_17 = 1754306636;
int zero = 0;
int var_18 = -575525325;
unsigned long long int var_19 = 1422691786890110336ULL;
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
