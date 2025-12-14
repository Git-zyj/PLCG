#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28946;
unsigned char var_1 = (unsigned char)128;
unsigned short var_7 = (unsigned short)4428;
unsigned long long int var_9 = 2445881309495658977ULL;
int zero = 0;
long long int var_16 = -3679470522575172595LL;
unsigned short var_17 = (unsigned short)4839;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
