#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7692673295513160768LL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2291660423503248309LL;
unsigned int var_5 = 2732489013U;
_Bool var_6 = (_Bool)0;
long long int var_8 = 8278170787995332641LL;
short var_9 = (short)15809;
long long int var_10 = -3230810897005825775LL;
int var_11 = -38618176;
int zero = 0;
unsigned int var_12 = 4245872422U;
int var_13 = -643841619;
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
