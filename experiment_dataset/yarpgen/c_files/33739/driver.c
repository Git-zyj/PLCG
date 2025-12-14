#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2123335563;
unsigned short var_3 = (unsigned short)6239;
unsigned long long int var_4 = 1015862105378090105ULL;
int zero = 0;
signed char var_13 = (signed char)94;
unsigned int var_14 = 3587867031U;
long long int var_15 = -7149623859802040356LL;
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
