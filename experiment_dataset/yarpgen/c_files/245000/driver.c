#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)19;
unsigned int var_4 = 3038180349U;
long long int var_10 = -465600517303312078LL;
unsigned char var_11 = (unsigned char)14;
unsigned short var_12 = (unsigned short)6190;
unsigned long long int var_14 = 15773831264394991995ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)40502;
unsigned int var_16 = 854676775U;
unsigned short var_17 = (unsigned short)39675;
void init() {
}

void checksum() {
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
