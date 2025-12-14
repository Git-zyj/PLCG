#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)60517;
long long int var_11 = 1100679300929564271LL;
long long int var_14 = 7523708262330982427LL;
int zero = 0;
unsigned long long int var_15 = 7517444358865604983ULL;
unsigned int var_16 = 1764104111U;
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
