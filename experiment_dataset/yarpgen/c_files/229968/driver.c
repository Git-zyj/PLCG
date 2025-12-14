#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 831020390418922826LL;
unsigned char var_10 = (unsigned char)189;
unsigned char var_13 = (unsigned char)233;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 7224577222920294886LL;
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
