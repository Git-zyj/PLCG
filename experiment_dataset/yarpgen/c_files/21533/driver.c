#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4535933376574109971ULL;
signed char var_7 = (signed char)-68;
int var_9 = -1872688855;
long long int var_10 = -3223287818860022034LL;
int zero = 0;
unsigned short var_15 = (unsigned short)6052;
unsigned char var_16 = (unsigned char)7;
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
