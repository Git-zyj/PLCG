#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)8059;
unsigned long long int var_8 = 15224541740340112356ULL;
long long int var_10 = -7442612220240750757LL;
int zero = 0;
long long int var_11 = 4767594074993593033LL;
short var_12 = (short)14625;
short var_13 = (short)31507;
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
