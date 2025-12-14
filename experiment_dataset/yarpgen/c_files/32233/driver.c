#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 666071673648536960ULL;
short var_3 = (short)25180;
int var_7 = 1374782445;
long long int var_8 = 3704514642720314755LL;
signed char var_10 = (signed char)125;
unsigned long long int var_14 = 11396676360592510895ULL;
int zero = 0;
long long int var_18 = 3260640371534787022LL;
long long int var_19 = -7086973801025763667LL;
unsigned long long int var_20 = 3745479843300737924ULL;
void init() {
}

void checksum() {
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
