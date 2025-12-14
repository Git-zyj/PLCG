#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 601248254;
unsigned char var_2 = (unsigned char)20;
short var_4 = (short)22479;
long long int var_5 = -6575425274563371509LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3673837508U;
unsigned short var_11 = (unsigned short)3878;
unsigned int var_12 = 2728214709U;
int zero = 0;
int var_14 = -262364754;
int var_15 = 1727886159;
int var_16 = -52162281;
short var_17 = (short)20981;
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
