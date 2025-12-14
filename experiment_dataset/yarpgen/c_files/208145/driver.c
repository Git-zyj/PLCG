#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12196254086382848879ULL;
signed char var_4 = (signed char)(-127 - 1);
unsigned int var_5 = 3276263128U;
short var_7 = (short)-21174;
long long int var_8 = -7668018001318762631LL;
unsigned int var_9 = 2371706300U;
unsigned short var_12 = (unsigned short)12976;
short var_13 = (short)6911;
int zero = 0;
unsigned int var_15 = 2798947752U;
unsigned char var_16 = (unsigned char)213;
_Bool var_17 = (_Bool)1;
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
