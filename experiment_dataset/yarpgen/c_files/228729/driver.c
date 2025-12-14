#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1647528706U;
unsigned int var_3 = 2910255550U;
unsigned long long int var_6 = 9207441953627550811ULL;
unsigned char var_7 = (unsigned char)167;
long long int var_9 = -6991833541809368573LL;
unsigned int var_11 = 1115325345U;
unsigned short var_12 = (unsigned short)2044;
int zero = 0;
unsigned char var_13 = (unsigned char)119;
unsigned long long int var_14 = 9247778020873121683ULL;
short var_15 = (short)27176;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
