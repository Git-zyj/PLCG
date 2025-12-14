#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7181597422779929261LL;
long long int var_2 = 8609545680643945457LL;
long long int var_4 = -7553930921505434400LL;
unsigned char var_7 = (unsigned char)66;
int zero = 0;
unsigned char var_11 = (unsigned char)66;
long long int var_12 = -8759738670693258802LL;
short var_13 = (short)-23043;
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
