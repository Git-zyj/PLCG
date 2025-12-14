#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15502;
signed char var_1 = (signed char)24;
signed char var_2 = (signed char)-14;
signed char var_6 = (signed char)31;
int zero = 0;
long long int var_11 = 8070384131266826010LL;
signed char var_12 = (signed char)53;
unsigned int var_13 = 3219112419U;
int var_14 = 1225550122;
void init() {
}

void checksum() {
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
