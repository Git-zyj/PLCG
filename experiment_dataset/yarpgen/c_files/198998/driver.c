#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
short var_2 = (short)13145;
unsigned short var_6 = (unsigned short)26964;
short var_9 = (short)13851;
unsigned long long int var_15 = 11946642966353184808ULL;
long long int var_16 = -3391067020670199255LL;
int zero = 0;
unsigned short var_17 = (unsigned short)15236;
unsigned char var_18 = (unsigned char)235;
int var_19 = -1765242375;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
