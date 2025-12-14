#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1320722917U;
short var_4 = (short)7653;
unsigned long long int var_7 = 14539739860118194527ULL;
int zero = 0;
long long int var_10 = 38915724970164068LL;
long long int var_11 = 9129539985024494033LL;
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
