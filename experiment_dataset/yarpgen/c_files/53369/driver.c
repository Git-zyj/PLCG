#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4318;
long long int var_5 = -7591676236755285433LL;
unsigned char var_10 = (unsigned char)120;
unsigned char var_15 = (unsigned char)235;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -9068405291873540174LL;
unsigned short var_19 = (unsigned short)9865;
int var_20 = 1338654468;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
