#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7094969262467792304ULL;
short var_2 = (short)12110;
short var_8 = (short)16390;
unsigned long long int var_17 = 7120129792579213749ULL;
int zero = 0;
short var_19 = (short)-449;
unsigned long long int var_20 = 1418846504682457237ULL;
long long int var_21 = 1278389371008999293LL;
long long int var_22 = -8860784998046634771LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
