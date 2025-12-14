#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)152;
unsigned short var_6 = (unsigned short)23983;
unsigned short var_8 = (unsigned short)9623;
int var_10 = 1391265743;
long long int var_14 = -5026994672640070737LL;
int zero = 0;
int var_15 = -1913777101;
short var_16 = (short)14385;
short var_17 = (short)8571;
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
