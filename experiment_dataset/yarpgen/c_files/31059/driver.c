#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7108356604030471786LL;
unsigned int var_3 = 572949257U;
unsigned int var_4 = 2620462914U;
short var_8 = (short)-9411;
short var_10 = (short)10527;
int zero = 0;
long long int var_11 = 1941466911178943367LL;
unsigned int var_12 = 333299452U;
void init() {
}

void checksum() {
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
