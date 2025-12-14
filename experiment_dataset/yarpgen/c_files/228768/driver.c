#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11320560113177248064ULL;
int var_7 = -911569474;
long long int var_9 = -2108800121587848980LL;
int zero = 0;
unsigned int var_10 = 3212992325U;
int var_11 = 12490;
long long int var_12 = 3328974937451827149LL;
int var_13 = -1564902860;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
