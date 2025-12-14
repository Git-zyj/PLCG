#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1859876653;
unsigned int var_6 = 3673753629U;
short var_7 = (short)15020;
int var_8 = -1555290438;
int zero = 0;
short var_10 = (short)27183;
long long int var_11 = -7991695276073965177LL;
unsigned long long int var_12 = 290510248043180407ULL;
short var_13 = (short)24546;
unsigned char var_14 = (unsigned char)186;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
