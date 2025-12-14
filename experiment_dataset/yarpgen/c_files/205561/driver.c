#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3793837230742919055LL;
int var_11 = 946917573;
long long int var_12 = 132265240108230380LL;
unsigned short var_15 = (unsigned short)34874;
long long int var_17 = 720183118797342858LL;
int zero = 0;
long long int var_20 = 8480528091700322020LL;
unsigned short var_21 = (unsigned short)2633;
unsigned short var_22 = (unsigned short)32388;
int var_23 = -1530620604;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
