#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1990898588U;
unsigned int var_8 = 1150378537U;
unsigned char var_9 = (unsigned char)224;
long long int var_11 = 4365656153647742244LL;
long long int var_12 = -8527526740831775506LL;
int zero = 0;
unsigned int var_14 = 1964941084U;
unsigned long long int var_15 = 4413332674653249333ULL;
int var_16 = 1763309625;
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
