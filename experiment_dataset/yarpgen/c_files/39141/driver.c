#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54986;
long long int var_5 = -3245002962203406362LL;
signed char var_6 = (signed char)57;
unsigned short var_7 = (unsigned short)55547;
unsigned short var_12 = (unsigned short)59152;
signed char var_13 = (signed char)5;
long long int var_15 = 6330529952647244903LL;
int zero = 0;
short var_17 = (short)30738;
short var_18 = (short)31931;
unsigned short var_19 = (unsigned short)5142;
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
