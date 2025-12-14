#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1017577169U;
short var_5 = (short)8858;
long long int var_8 = 9001336330249670527LL;
int zero = 0;
unsigned int var_11 = 2644249886U;
short var_12 = (short)5473;
unsigned int var_13 = 3428163269U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
