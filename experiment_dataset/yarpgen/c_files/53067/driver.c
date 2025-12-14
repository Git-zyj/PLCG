#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12526929728695107175ULL;
_Bool var_1 = (_Bool)0;
long long int var_2 = 4890815705676327313LL;
unsigned short var_4 = (unsigned short)45787;
short var_5 = (short)30871;
unsigned char var_9 = (unsigned char)199;
int zero = 0;
unsigned long long int var_10 = 6966260485208433146ULL;
unsigned char var_11 = (unsigned char)12;
unsigned char var_12 = (unsigned char)186;
unsigned int var_13 = 446576322U;
unsigned char var_14 = (unsigned char)174;
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
