#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 11930605212383889491ULL;
unsigned char var_9 = (unsigned char)145;
long long int var_13 = -2085242489960927120LL;
int zero = 0;
unsigned short var_15 = (unsigned short)46729;
long long int var_16 = -8245198632217343094LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
