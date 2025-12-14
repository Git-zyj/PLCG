#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2473184049282187547LL;
unsigned long long int var_3 = 12975096292633212141ULL;
signed char var_10 = (signed char)-111;
unsigned short var_13 = (unsigned short)53764;
int zero = 0;
int var_14 = 587568716;
unsigned short var_15 = (unsigned short)23344;
void init() {
}

void checksum() {
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
