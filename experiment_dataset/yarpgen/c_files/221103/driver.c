#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7001710014628038510LL;
long long int var_2 = 3585388179411355480LL;
short var_4 = (short)-1835;
int zero = 0;
unsigned short var_14 = (unsigned short)41937;
unsigned short var_15 = (unsigned short)17463;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
