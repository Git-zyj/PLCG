#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
short var_8 = (short)26469;
unsigned long long int var_10 = 4799244436203200488ULL;
int zero = 0;
short var_17 = (short)-8329;
long long int var_18 = -5271254298545369473LL;
short var_19 = (short)11357;
short var_20 = (short)-23401;
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
