#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14657;
short var_1 = (short)-27239;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_11 = -3396892695641812468LL;
unsigned short var_12 = (unsigned short)30519;
signed char var_13 = (signed char)72;
signed char var_14 = (signed char)-41;
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
