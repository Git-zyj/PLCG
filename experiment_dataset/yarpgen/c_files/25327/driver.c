#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -520781518;
unsigned long long int var_8 = 1479721848173365618ULL;
long long int var_10 = -2672592836559852715LL;
int zero = 0;
unsigned char var_18 = (unsigned char)6;
unsigned short var_19 = (unsigned short)41831;
unsigned short var_20 = (unsigned short)61662;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
