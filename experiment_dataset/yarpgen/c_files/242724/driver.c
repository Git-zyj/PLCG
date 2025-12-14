#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4161789032U;
long long int var_3 = 44611014243693874LL;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6950971005642158484LL;
unsigned int var_8 = 2423768762U;
unsigned int var_10 = 177082852U;
long long int var_11 = -743259294848768716LL;
signed char var_12 = (signed char)-65;
int zero = 0;
short var_13 = (short)-11816;
int var_14 = -562735171;
long long int var_15 = -4366648348482385496LL;
long long int var_16 = -2300460759534919511LL;
short var_17 = (short)4166;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
