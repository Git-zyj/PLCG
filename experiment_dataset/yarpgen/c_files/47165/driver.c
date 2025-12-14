#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7587175640027892997LL;
short var_3 = (short)-10057;
unsigned long long int var_6 = 2259746434718225475ULL;
signed char var_8 = (signed char)58;
unsigned char var_13 = (unsigned char)113;
int zero = 0;
unsigned long long int var_14 = 11149748101981274520ULL;
unsigned long long int var_15 = 1319445871360713939ULL;
long long int var_16 = 2436488674668035653LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
