#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)19096;
int var_8 = -1317939577;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 15290845053480043662ULL;
long long int var_13 = 1508626207644384714LL;
void init() {
}

void checksum() {
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
