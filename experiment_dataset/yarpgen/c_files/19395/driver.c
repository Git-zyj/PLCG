#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4682362414593004881ULL;
int var_2 = 610856376;
int var_5 = -1937481401;
int var_7 = 1519823069;
int zero = 0;
long long int var_13 = 6013298447261401485LL;
unsigned short var_14 = (unsigned short)41779;
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
