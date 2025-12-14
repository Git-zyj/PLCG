#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1820145270;
int var_2 = -967225142;
unsigned long long int var_4 = 3325996576888703768ULL;
_Bool var_5 = (_Bool)0;
int var_6 = -683359312;
signed char var_11 = (signed char)61;
int zero = 0;
int var_13 = -1238202928;
int var_14 = 1359331391;
int var_15 = 1290014462;
void init() {
}

void checksum() {
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
