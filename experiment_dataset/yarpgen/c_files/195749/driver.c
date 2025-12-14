#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4856271524539211186LL;
unsigned char var_5 = (unsigned char)113;
unsigned int var_7 = 3477444224U;
int var_9 = -2029533563;
unsigned int var_10 = 2066310988U;
unsigned int var_11 = 1566107796U;
int zero = 0;
unsigned short var_12 = (unsigned short)29994;
unsigned short var_13 = (unsigned short)50102;
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
