#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17143;
long long int var_4 = 8505250028870630176LL;
long long int var_5 = -319518959682644018LL;
int zero = 0;
long long int var_11 = -4959388898878942507LL;
long long int var_12 = -8539569300811678625LL;
short var_13 = (short)3263;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
