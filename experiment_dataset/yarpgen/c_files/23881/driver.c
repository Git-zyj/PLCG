#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 252974569;
_Bool var_5 = (_Bool)0;
long long int var_7 = 4812809253808140044LL;
int zero = 0;
unsigned long long int var_11 = 7563243913184297153ULL;
long long int var_12 = 1204539117267049550LL;
unsigned char var_13 = (unsigned char)137;
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
