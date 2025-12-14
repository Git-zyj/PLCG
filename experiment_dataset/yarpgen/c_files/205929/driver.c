#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11803195819907356082ULL;
unsigned long long int var_2 = 3803733602392829186ULL;
unsigned long long int var_6 = 2418647147767358090ULL;
short var_7 = (short)-13197;
short var_11 = (short)-32250;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-2307;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
