#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8231246846462420229LL;
unsigned long long int var_2 = 6790028393048566346ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_14 = 6316738020017355678LL;
unsigned int var_15 = 180980737U;
short var_16 = (short)-28068;
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
