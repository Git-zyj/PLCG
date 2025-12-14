#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49293;
unsigned int var_5 = 3414171587U;
unsigned long long int var_10 = 5305319611614544226ULL;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
long long int var_12 = -7616979343136916881LL;
signed char var_13 = (signed char)122;
unsigned char var_14 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
