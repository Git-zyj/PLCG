#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)7;
long long int var_7 = -3372676186217471841LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_13 = 1161519866519183934LL;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
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
