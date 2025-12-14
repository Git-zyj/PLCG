#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12381;
unsigned short var_8 = (unsigned short)21600;
long long int var_10 = -2562559789131269076LL;
int zero = 0;
long long int var_11 = -7308680399236604157LL;
unsigned short var_12 = (unsigned short)23680;
signed char var_13 = (signed char)-112;
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
