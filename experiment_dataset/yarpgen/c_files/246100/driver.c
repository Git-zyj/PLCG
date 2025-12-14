#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55288;
unsigned long long int var_3 = 6570913673865855523ULL;
unsigned short var_7 = (unsigned short)33581;
unsigned long long int var_9 = 3019978262980244849ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)51016;
int var_14 = 877228814;
long long int var_15 = -7069796296497952152LL;
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
