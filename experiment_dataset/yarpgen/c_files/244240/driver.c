#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4088741389U;
unsigned long long int var_7 = 2491351550588137393ULL;
int var_10 = 944723469;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 3405606405U;
int zero = 0;
unsigned char var_14 = (unsigned char)142;
unsigned char var_15 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
