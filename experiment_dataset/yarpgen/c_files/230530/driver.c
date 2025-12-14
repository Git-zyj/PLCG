#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14643;
long long int var_2 = -865914798989415344LL;
unsigned long long int var_4 = 13518820067984536540ULL;
long long int var_5 = 6144524746618141071LL;
unsigned long long int var_6 = 1213863771359432574ULL;
unsigned char var_8 = (unsigned char)213;
int zero = 0;
long long int var_11 = 5134501475558041873LL;
unsigned long long int var_12 = 3565933107495190498ULL;
unsigned long long int var_13 = 3885271654476351641ULL;
void init() {
}

void checksum() {
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
