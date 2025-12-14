#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8623516275121830308LL;
unsigned long long int var_3 = 14905500087680018706ULL;
unsigned int var_5 = 1621143720U;
_Bool var_6 = (_Bool)0;
int var_10 = -399826889;
int zero = 0;
long long int var_12 = -6742366599124609476LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
