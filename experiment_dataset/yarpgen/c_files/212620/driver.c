#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2741862079U;
unsigned int var_1 = 689855133U;
unsigned char var_2 = (unsigned char)29;
_Bool var_3 = (_Bool)0;
long long int var_4 = 1398975153684774237LL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 3189760285761014232LL;
long long int var_12 = -9147180639695754963LL;
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
