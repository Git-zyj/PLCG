#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18605;
unsigned short var_4 = (unsigned short)56928;
unsigned short var_5 = (unsigned short)20362;
long long int var_9 = 6664308550889028803LL;
long long int var_18 = -1863679978218773823LL;
int zero = 0;
short var_20 = (short)-7434;
unsigned long long int var_21 = 13882106195014373033ULL;
int var_22 = -1923965282;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
