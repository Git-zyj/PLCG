#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 1481171894;
int var_11 = -2061207729;
unsigned char var_17 = (unsigned char)189;
int zero = 0;
short var_19 = (short)8171;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7063656272109799546ULL;
unsigned long long int var_22 = 9305262175818150667ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
