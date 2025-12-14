#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28657;
short var_6 = (short)-15727;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = 3684501778932495066LL;
short var_13 = (short)24324;
long long int var_14 = -227200216319023056LL;
int zero = 0;
unsigned char var_20 = (unsigned char)58;
long long int var_21 = 6135115326427492738LL;
void init() {
}

void checksum() {
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
