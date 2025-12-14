#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10962004719980796370ULL;
short var_2 = (short)25960;
signed char var_6 = (signed char)16;
int zero = 0;
signed char var_12 = (signed char)40;
unsigned char var_13 = (unsigned char)181;
unsigned long long int var_14 = 14251247216692497262ULL;
void init() {
}

void checksum() {
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
