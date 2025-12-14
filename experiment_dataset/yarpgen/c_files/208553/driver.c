#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4649;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2681166993U;
long long int var_5 = 7128999335522031499LL;
int var_6 = -632894472;
int var_8 = -992378910;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3192312626U;
int var_13 = 2045977005;
unsigned int var_14 = 1047395094U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
