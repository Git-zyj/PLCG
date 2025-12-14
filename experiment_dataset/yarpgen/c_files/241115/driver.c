#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5419725924811217781LL;
short var_3 = (short)-224;
long long int var_4 = -3088480525423150965LL;
int zero = 0;
long long int var_10 = -8189347061163592261LL;
short var_11 = (short)-19438;
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
