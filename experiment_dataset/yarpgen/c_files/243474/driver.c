#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2933696965280327950LL;
int var_7 = -1397306443;
int var_8 = -250419897;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 2526387284905615737LL;
short var_13 = (short)-31793;
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
