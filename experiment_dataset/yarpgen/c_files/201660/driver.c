#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7322;
long long int var_1 = -3885081724181851411LL;
int var_7 = 278150025;
int var_8 = -1750369499;
unsigned short var_10 = (unsigned short)14760;
unsigned int var_11 = 3038053767U;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-104;
long long int var_16 = -4860728819077328634LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
