#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54061;
int var_1 = -772269917;
int var_6 = -977698283;
int var_9 = 276387719;
long long int var_10 = -3815691907084375872LL;
int zero = 0;
signed char var_11 = (signed char)-107;
int var_12 = -2096125792;
int var_13 = -481543911;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
