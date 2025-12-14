#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
int var_3 = 792977767;
signed char var_8 = (signed char)85;
unsigned int var_9 = 2118231619U;
unsigned int var_13 = 1901797963U;
int zero = 0;
unsigned short var_16 = (unsigned short)442;
unsigned long long int var_17 = 10915677696232287910ULL;
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
