#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7759145442809951464ULL;
int var_4 = -2057342326;
int var_10 = -1394726443;
long long int var_14 = -8930733685105809865LL;
unsigned short var_17 = (unsigned short)59948;
int zero = 0;
signed char var_18 = (signed char)1;
unsigned short var_19 = (unsigned short)40031;
long long int var_20 = -4256360669215669029LL;
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
