#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-27824;
unsigned long long int var_6 = 8088665143740611680ULL;
long long int var_7 = -3091770273288719485LL;
unsigned char var_12 = (unsigned char)22;
int zero = 0;
int var_17 = 207578901;
unsigned char var_18 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
