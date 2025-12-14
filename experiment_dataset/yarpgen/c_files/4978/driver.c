#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-31305;
short var_5 = (short)-29442;
_Bool var_13 = (_Bool)1;
short var_15 = (short)16143;
signed char var_17 = (signed char)33;
int zero = 0;
long long int var_18 = -3443135664333567891LL;
unsigned short var_19 = (unsigned short)18637;
unsigned short var_20 = (unsigned short)48249;
unsigned short var_21 = (unsigned short)1080;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
