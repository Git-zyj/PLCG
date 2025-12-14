#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17353894808028437827ULL;
unsigned long long int var_3 = 15492511677922692683ULL;
int var_5 = 268947330;
long long int var_8 = -7914047787652419094LL;
unsigned long long int var_12 = 1904724029830711036ULL;
int zero = 0;
int var_13 = -1856887136;
long long int var_14 = 1949974615092331139LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
