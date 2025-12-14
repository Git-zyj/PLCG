#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4888201226628562573LL;
_Bool var_3 = (_Bool)0;
int var_7 = 968589132;
unsigned int var_10 = 3447586309U;
int zero = 0;
unsigned long long int var_11 = 51048760679817348ULL;
unsigned char var_12 = (unsigned char)71;
unsigned int var_13 = 2645637947U;
unsigned char var_14 = (unsigned char)9;
long long int var_15 = 2106434140850587518LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
