#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10461574610836421060ULL;
int var_3 = 2012388453;
long long int var_5 = -5795466118424919581LL;
int zero = 0;
unsigned char var_10 = (unsigned char)178;
unsigned char var_11 = (unsigned char)79;
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
