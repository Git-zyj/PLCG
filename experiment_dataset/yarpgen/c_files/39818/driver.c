#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5905302968987149092LL;
unsigned long long int var_5 = 17015747116993730535ULL;
short var_7 = (short)-30793;
short var_10 = (short)-16029;
int zero = 0;
unsigned int var_11 = 3091561312U;
long long int var_12 = 2656725184766957821LL;
void init() {
}

void checksum() {
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
