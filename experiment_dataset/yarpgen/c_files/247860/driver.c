#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -613888294510507060LL;
long long int var_9 = 2848166138379775287LL;
long long int var_13 = -5870517769186290099LL;
int zero = 0;
long long int var_15 = -1355382363530788624LL;
long long int var_16 = 3054008284344191019LL;
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
