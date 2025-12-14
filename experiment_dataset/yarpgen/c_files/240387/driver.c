#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)76;
unsigned int var_4 = 3615348535U;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 3910540563U;
unsigned char var_10 = (unsigned char)234;
unsigned int var_13 = 862321978U;
long long int var_14 = 6409113717336336981LL;
int zero = 0;
int var_20 = -946949540;
unsigned int var_21 = 516422158U;
unsigned int var_22 = 2634216139U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
