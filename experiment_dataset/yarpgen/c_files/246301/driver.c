#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1970362035;
signed char var_3 = (signed char)90;
int var_5 = 1351944001;
signed char var_6 = (signed char)65;
int var_7 = -1732373728;
unsigned short var_8 = (unsigned short)23380;
int zero = 0;
int var_12 = -1500605962;
unsigned int var_13 = 3298035174U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
