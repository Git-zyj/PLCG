#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10501233682201281989ULL;
unsigned short var_10 = (unsigned short)9781;
unsigned long long int var_16 = 9945680025706600771ULL;
int zero = 0;
short var_20 = (short)17612;
unsigned long long int var_21 = 12234958236722902983ULL;
long long int var_22 = 3765200219855284649LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
