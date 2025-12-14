#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4376519714487736622LL;
long long int var_6 = 5850531562473810760LL;
long long int var_7 = 6244077594826405576LL;
long long int var_10 = -1560438930087899916LL;
long long int var_11 = 4040143221419284532LL;
unsigned int var_14 = 777300872U;
unsigned short var_16 = (unsigned short)30575;
signed char var_17 = (signed char)123;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)218;
void init() {
}

void checksum() {
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
