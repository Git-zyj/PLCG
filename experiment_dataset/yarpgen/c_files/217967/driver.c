#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2058363466;
signed char var_3 = (signed char)-97;
unsigned int var_5 = 1320206124U;
long long int var_18 = 1345543245211935784LL;
int zero = 0;
unsigned int var_19 = 2588923264U;
short var_20 = (short)-19505;
void init() {
}

void checksum() {
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
