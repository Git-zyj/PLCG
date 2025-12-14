#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned int var_1 = 971635756U;
unsigned long long int var_4 = 11359586716796832150ULL;
unsigned long long int var_7 = 11439881120710962655ULL;
int zero = 0;
int var_15 = -730101528;
long long int var_16 = 3339175664053981536LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
