#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2769435809630426422ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)72;
int zero = 0;
unsigned long long int var_11 = 8187027638771869568ULL;
short var_12 = (short)18342;
unsigned long long int var_13 = 6564409968831637152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
