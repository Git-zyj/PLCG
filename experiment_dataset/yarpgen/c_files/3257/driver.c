#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13682868815370659699ULL;
long long int var_3 = -4674392332925836922LL;
long long int var_4 = -8827604271033816291LL;
int var_10 = -1997854361;
unsigned long long int var_12 = 4599592971233846568ULL;
long long int var_17 = 2669003320271879274LL;
int zero = 0;
unsigned char var_19 = (unsigned char)189;
signed char var_20 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
