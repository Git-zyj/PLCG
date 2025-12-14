#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1110552206U;
short var_4 = (short)-7857;
unsigned int var_8 = 1699124127U;
unsigned int var_11 = 2812527141U;
unsigned int var_12 = 1687793696U;
int zero = 0;
int var_13 = -895205598;
long long int var_14 = -4577046396995665019LL;
void init() {
}

void checksum() {
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
