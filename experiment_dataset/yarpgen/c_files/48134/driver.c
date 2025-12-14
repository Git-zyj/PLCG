#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22405;
_Bool var_4 = (_Bool)1;
short var_5 = (short)30294;
short var_7 = (short)-32393;
long long int var_10 = 8596270703253313364LL;
int zero = 0;
long long int var_12 = -4926836407983672309LL;
unsigned long long int var_13 = 16912587076669391587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
