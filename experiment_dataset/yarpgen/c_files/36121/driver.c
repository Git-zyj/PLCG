#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1592605263;
unsigned int var_1 = 665915232U;
unsigned char var_3 = (unsigned char)193;
int var_7 = 1687013088;
unsigned short var_8 = (unsigned short)57929;
int var_9 = 401297335;
int zero = 0;
unsigned long long int var_10 = 15025525836904883745ULL;
unsigned long long int var_11 = 13814264406007400672ULL;
long long int var_12 = 3158182981548005218LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
