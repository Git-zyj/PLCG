#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6313872658318926007LL;
long long int var_4 = 6326650174433148590LL;
unsigned long long int var_6 = 2200880410565630490ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1078318167U;
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
