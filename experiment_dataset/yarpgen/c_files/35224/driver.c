#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)61;
unsigned long long int var_6 = 15511698934290302321ULL;
unsigned char var_8 = (unsigned char)186;
unsigned int var_9 = 2798243152U;
long long int var_13 = -7745847402640453002LL;
signed char var_16 = (signed char)64;
int zero = 0;
unsigned int var_17 = 1696734584U;
int var_18 = 1475755756;
unsigned short var_19 = (unsigned short)45784;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
