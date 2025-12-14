#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 241399902U;
short var_6 = (short)-8412;
short var_10 = (short)-18306;
long long int var_11 = -77561174889806591LL;
unsigned char var_12 = (unsigned char)233;
unsigned int var_16 = 3151720875U;
int zero = 0;
signed char var_18 = (signed char)-3;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)36295;
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
