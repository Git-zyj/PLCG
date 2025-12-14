#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2742106208511988522LL;
unsigned long long int var_3 = 389492416833175809ULL;
short var_8 = (short)32560;
unsigned int var_11 = 2037345591U;
int zero = 0;
long long int var_13 = -9152325427589308713LL;
short var_14 = (short)21226;
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
