#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1341035533;
long long int var_3 = -2972175853875404307LL;
unsigned int var_9 = 3348302888U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 9266518474754730597ULL;
unsigned int var_14 = 3931399976U;
int var_15 = 1398013899;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
