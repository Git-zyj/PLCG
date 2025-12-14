#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6194415043880417908LL;
unsigned long long int var_4 = 11344011150334195103ULL;
signed char var_5 = (signed char)114;
unsigned int var_6 = 1382178418U;
int zero = 0;
int var_10 = 598637523;
unsigned char var_11 = (unsigned char)59;
unsigned char var_12 = (unsigned char)102;
unsigned char var_13 = (unsigned char)1;
unsigned short var_14 = (unsigned short)17598;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
