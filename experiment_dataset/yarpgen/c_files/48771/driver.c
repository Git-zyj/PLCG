#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10319891724109099405ULL;
long long int var_8 = 2893160981861149845LL;
long long int var_9 = -6406589148756737587LL;
unsigned int var_10 = 855502600U;
unsigned char var_12 = (unsigned char)108;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
unsigned short var_21 = (unsigned short)55174;
unsigned short var_22 = (unsigned short)21669;
_Bool var_23 = (_Bool)1;
int var_24 = -112112196;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
