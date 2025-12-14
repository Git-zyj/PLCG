#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1499084090U;
short var_4 = (short)32613;
long long int var_5 = 7126863069044788514LL;
unsigned char var_6 = (unsigned char)232;
unsigned char var_7 = (unsigned char)190;
signed char var_9 = (signed char)121;
short var_10 = (short)1966;
long long int var_11 = 4780220752387513526LL;
int zero = 0;
int var_14 = -462594361;
int var_15 = 1872314376;
int var_16 = -1949614868;
unsigned char var_17 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
