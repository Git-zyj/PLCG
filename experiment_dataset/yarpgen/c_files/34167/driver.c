#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)25;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)64;
int zero = 0;
unsigned char var_10 = (unsigned char)212;
long long int var_11 = 1487931392968569821LL;
long long int var_12 = 5199031296159399934LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
