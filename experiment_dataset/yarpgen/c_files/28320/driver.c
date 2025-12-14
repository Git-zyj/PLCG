#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34541;
long long int var_1 = -4829500505932080174LL;
int var_3 = 2135147304;
int var_4 = 1528631977;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)29078;
unsigned short var_11 = (unsigned short)57384;
signed char var_13 = (signed char)102;
long long int var_14 = -4065038098604506821LL;
int var_15 = -870715639;
int zero = 0;
signed char var_16 = (signed char)66;
unsigned short var_17 = (unsigned short)5757;
unsigned short var_18 = (unsigned short)41114;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
