#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -5496095887131293958LL;
int var_10 = 530912011;
short var_14 = (short)-716;
int var_17 = -625228896;
int var_18 = -2003163653;
int zero = 0;
unsigned long long int var_19 = 4900217316575800464ULL;
signed char var_20 = (signed char)-41;
void init() {
}

void checksum() {
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
