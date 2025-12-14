#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1554967593275441379LL;
unsigned char var_6 = (unsigned char)201;
short var_9 = (short)-32175;
unsigned long long int var_18 = 128749745059188494ULL;
int zero = 0;
unsigned long long int var_20 = 1649766651302671694ULL;
unsigned long long int var_21 = 5053476315806919780ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
