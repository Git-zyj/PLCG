#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2339833659U;
int var_2 = 825498869;
int var_8 = -219757281;
int zero = 0;
long long int var_10 = -2401118050792690791LL;
long long int var_11 = 5886382595197832839LL;
long long int var_12 = 1533294133876719150LL;
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
