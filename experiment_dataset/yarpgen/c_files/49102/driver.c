#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2225062847U;
int var_5 = 127776766;
unsigned int var_8 = 485595246U;
int var_12 = -586817131;
int var_13 = -1733098352;
int zero = 0;
unsigned int var_18 = 3578665635U;
unsigned long long int var_19 = 15979736445952419168ULL;
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
