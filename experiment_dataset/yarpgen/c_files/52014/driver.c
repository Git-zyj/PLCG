#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14624106207720494785ULL;
_Bool var_11 = (_Bool)1;
long long int var_13 = -4137999814521617190LL;
int var_14 = 2014386256;
int zero = 0;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)82;
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
