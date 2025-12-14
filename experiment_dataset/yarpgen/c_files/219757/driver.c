#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
long long int var_11 = 5748421700494341918LL;
long long int var_13 = -2738214935380337542LL;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)83;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
unsigned long long int var_21 = 2729978997343775719ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
