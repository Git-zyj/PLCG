#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28749;
unsigned char var_2 = (unsigned char)12;
unsigned long long int var_7 = 6750491789807223953ULL;
unsigned short var_11 = (unsigned short)59924;
unsigned long long int var_12 = 17416355409338155948ULL;
unsigned short var_14 = (unsigned short)30734;
unsigned char var_15 = (unsigned char)234;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8935524088227565301LL;
short var_19 = (short)-1325;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
