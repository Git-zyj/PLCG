#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1025967874U;
unsigned char var_5 = (unsigned char)27;
unsigned long long int var_8 = 12914496235406443084ULL;
long long int var_11 = -3044010030966232486LL;
int zero = 0;
unsigned char var_16 = (unsigned char)122;
int var_17 = -746612404;
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
