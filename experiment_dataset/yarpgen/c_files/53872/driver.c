#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)107;
unsigned long long int var_13 = 16164572958164106612ULL;
unsigned short var_14 = (unsigned short)8372;
int zero = 0;
unsigned short var_15 = (unsigned short)25106;
unsigned long long int var_16 = 14469554345937372623ULL;
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
