#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)147;
unsigned long long int var_4 = 13085461331873065772ULL;
signed char var_5 = (signed char)62;
int zero = 0;
unsigned long long int var_10 = 11937673246335556029ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3143045694458904068LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
