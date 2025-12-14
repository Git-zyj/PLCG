#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1004980323;
unsigned long long int var_3 = 17587207147156343645ULL;
signed char var_6 = (signed char)50;
signed char var_9 = (signed char)-119;
int zero = 0;
signed char var_13 = (signed char)-116;
unsigned char var_14 = (unsigned char)30;
long long int var_15 = 8660238434008406399LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
