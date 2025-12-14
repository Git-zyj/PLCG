#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6273;
long long int var_6 = 5474991801118770684LL;
signed char var_7 = (signed char)-52;
short var_9 = (short)31070;
unsigned long long int var_10 = 3226095525158996733ULL;
unsigned int var_11 = 1891631457U;
int var_14 = 2034325114;
int zero = 0;
int var_17 = 1025703996;
unsigned char var_18 = (unsigned char)252;
int var_19 = 1360603590;
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
