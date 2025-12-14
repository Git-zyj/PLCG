#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)27360;
unsigned char var_8 = (unsigned char)226;
long long int var_10 = 1611023622803320197LL;
long long int var_11 = -3849059908094005320LL;
unsigned long long int var_12 = 6198266001631130533ULL;
unsigned long long int var_14 = 13382912666141204932ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)250;
unsigned char var_18 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
