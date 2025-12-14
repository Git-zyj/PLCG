#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2933172995U;
unsigned short var_8 = (unsigned short)56376;
int zero = 0;
signed char var_13 = (signed char)93;
unsigned long long int var_14 = 10766369318484680061ULL;
unsigned short var_15 = (unsigned short)25890;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
