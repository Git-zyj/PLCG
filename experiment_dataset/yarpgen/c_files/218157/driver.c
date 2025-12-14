#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1116961508;
unsigned int var_3 = 3169107511U;
unsigned short var_4 = (unsigned short)1522;
long long int var_5 = -128747197473173280LL;
long long int var_7 = 3838322869814042148LL;
int var_9 = -811441883;
int var_10 = -373930445;
signed char var_11 = (signed char)5;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
