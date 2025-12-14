#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7281139706373856139LL;
_Bool var_1 = (_Bool)1;
long long int var_3 = -271928137497454905LL;
int zero = 0;
unsigned short var_17 = (unsigned short)24564;
unsigned int var_18 = 2571612494U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
