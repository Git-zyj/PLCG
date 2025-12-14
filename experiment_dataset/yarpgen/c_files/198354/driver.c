#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1248304107081955505LL;
short var_5 = (short)-11141;
signed char var_6 = (signed char)-34;
signed char var_7 = (signed char)100;
unsigned short var_9 = (unsigned short)33609;
int zero = 0;
short var_10 = (short)28477;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)2289;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
