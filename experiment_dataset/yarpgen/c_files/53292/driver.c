#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17547130023524857472ULL;
unsigned char var_10 = (unsigned char)211;
int zero = 0;
unsigned long long int var_12 = 17061778615908302245ULL;
unsigned long long int var_13 = 15419023515239366425ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
