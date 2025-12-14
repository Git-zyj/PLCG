#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16986150607457794572ULL;
signed char var_5 = (signed char)91;
signed char var_8 = (signed char)90;
long long int var_10 = 6015645804149081820LL;
int zero = 0;
signed char var_11 = (signed char)-54;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4241443248125618184LL;
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
