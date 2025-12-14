#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -554774384;
unsigned short var_6 = (unsigned short)8743;
long long int var_8 = 5467286990704847620LL;
int var_9 = -1104970778;
int zero = 0;
unsigned long long int var_15 = 12159777404517680843ULL;
long long int var_16 = -7320033207419542941LL;
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
