#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4518163696921733727LL;
unsigned int var_4 = 3734641057U;
int var_5 = 1707997148;
int var_9 = 1029376728;
int zero = 0;
short var_11 = (short)-16187;
short var_12 = (short)-5959;
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
