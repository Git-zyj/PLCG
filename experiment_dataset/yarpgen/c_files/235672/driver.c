#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6486249267228718548LL;
signed char var_1 = (signed char)-45;
long long int var_2 = -6560312302332194467LL;
unsigned long long int var_7 = 2245024429975722080ULL;
int var_9 = -741504023;
int zero = 0;
signed char var_12 = (signed char)99;
unsigned long long int var_13 = 17555369687239067386ULL;
signed char var_14 = (signed char)-109;
long long int var_15 = 1670603050377418488LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
