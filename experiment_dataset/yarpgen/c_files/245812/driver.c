#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39599;
unsigned long long int var_1 = 14169308001380575863ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3261583133U;
long long int var_12 = 8103426156903666743LL;
unsigned long long int var_13 = 16132490067584431453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
