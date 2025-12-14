#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17796237113471241743ULL;
long long int var_6 = 6020289583257954741LL;
int var_9 = -795898174;
long long int var_12 = 3924630959681619502LL;
long long int var_16 = -4649749873066566131LL;
int zero = 0;
long long int var_20 = 4130971233855630082LL;
long long int var_21 = 7015326274171489270LL;
unsigned long long int var_22 = 3050297132514149400ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
