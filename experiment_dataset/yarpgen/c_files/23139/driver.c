#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-117;
unsigned char var_7 = (unsigned char)100;
int var_11 = 974478992;
long long int var_13 = -1565342199528721673LL;
unsigned int var_14 = 2094899388U;
int zero = 0;
unsigned long long int var_19 = 3750761372265347168ULL;
unsigned char var_20 = (unsigned char)171;
short var_21 = (short)14302;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
