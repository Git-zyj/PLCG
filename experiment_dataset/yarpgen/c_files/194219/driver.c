#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6298848073933684716LL;
long long int var_6 = -2316404849591176395LL;
long long int var_7 = 4991411628333996375LL;
int zero = 0;
long long int var_10 = -7094693401789047979LL;
long long int var_11 = -4501086979469800LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
