#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4325536053957913974ULL;
int var_7 = -1776299375;
int zero = 0;
unsigned long long int var_10 = 6660946179362308468ULL;
unsigned long long int var_11 = 12442456555109474401ULL;
unsigned int var_12 = 598610071U;
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
