#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
int var_11 = -1502302511;
unsigned long long int var_12 = 1622587286787238597ULL;
unsigned char var_14 = (unsigned char)121;
int zero = 0;
signed char var_16 = (signed char)17;
unsigned int var_17 = 3231443982U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
