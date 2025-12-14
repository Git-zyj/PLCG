#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16652039202995793597ULL;
unsigned int var_6 = 478710321U;
unsigned int var_8 = 884060947U;
long long int var_10 = 9179721968740086829LL;
unsigned short var_11 = (unsigned short)19743;
int zero = 0;
unsigned long long int var_18 = 15428833365706095606ULL;
unsigned long long int var_19 = 634180641545556330ULL;
unsigned int var_20 = 2039918416U;
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
