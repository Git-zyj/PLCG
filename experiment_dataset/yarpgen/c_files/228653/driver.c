#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
short var_6 = (short)7351;
long long int var_18 = 3133924536234462833LL;
int zero = 0;
unsigned long long int var_19 = 3312095320069516269ULL;
unsigned long long int var_20 = 6648598317266948709ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
