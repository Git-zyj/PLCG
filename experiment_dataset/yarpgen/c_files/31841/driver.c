#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6143599328746917786LL;
unsigned long long int var_4 = 8180717727795115697ULL;
unsigned short var_5 = (unsigned short)59153;
int zero = 0;
unsigned long long int var_10 = 9688971687936718474ULL;
unsigned short var_11 = (unsigned short)22711;
long long int var_12 = 9168240105757014776LL;
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
