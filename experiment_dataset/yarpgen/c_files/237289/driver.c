#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7118354067897294094LL;
short var_6 = (short)13966;
long long int var_8 = -7857135280426978908LL;
unsigned long long int var_14 = 6027204544484388555ULL;
long long int var_17 = -5555649368441512515LL;
int zero = 0;
short var_20 = (short)-21573;
long long int var_21 = 5567038321303052849LL;
unsigned int var_22 = 1210604842U;
long long int var_23 = -3802139655018456748LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
