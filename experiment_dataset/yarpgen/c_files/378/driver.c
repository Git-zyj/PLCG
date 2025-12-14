#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -528181842;
int var_3 = -132083304;
long long int var_9 = 3896786351500902714LL;
long long int var_11 = -2103910333214533641LL;
unsigned short var_14 = (unsigned short)49909;
int zero = 0;
unsigned long long int var_15 = 18189692767960530900ULL;
unsigned long long int var_16 = 5825140519705651623ULL;
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
