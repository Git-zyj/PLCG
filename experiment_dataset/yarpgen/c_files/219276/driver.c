#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
unsigned int var_5 = 2276632497U;
short var_6 = (short)-8318;
signed char var_8 = (signed char)-25;
signed char var_10 = (signed char)-43;
int var_12 = 1696870232;
unsigned char var_13 = (unsigned char)165;
long long int var_14 = -2243749884167182719LL;
long long int var_16 = -1922696282585412548LL;
unsigned long long int var_17 = 8089171807141112618ULL;
int zero = 0;
unsigned int var_19 = 3463346521U;
short var_20 = (short)-4797;
short var_21 = (short)-12211;
unsigned long long int var_22 = 15387323813623143304ULL;
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
