#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2616626867238964652LL;
unsigned int var_2 = 1797998703U;
long long int var_5 = 8356841812252872193LL;
unsigned int var_7 = 2931896149U;
int zero = 0;
unsigned int var_10 = 2796858651U;
unsigned int var_11 = 130163449U;
unsigned int var_12 = 3231597006U;
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
