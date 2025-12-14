#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10780156209260738351ULL;
unsigned long long int var_4 = 5599641012288039466ULL;
_Bool var_5 = (_Bool)0;
long long int var_6 = -1448918819362360611LL;
_Bool var_8 = (_Bool)0;
int var_9 = -388834002;
int zero = 0;
unsigned char var_10 = (unsigned char)243;
_Bool var_11 = (_Bool)1;
int var_12 = -334705829;
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
