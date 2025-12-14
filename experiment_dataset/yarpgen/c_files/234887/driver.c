#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 224794986U;
short var_5 = (short)-830;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)105;
signed char var_11 = (signed char)98;
signed char var_13 = (signed char)-4;
unsigned int var_14 = 2956949823U;
signed char var_16 = (signed char)112;
signed char var_17 = (signed char)-91;
short var_19 = (short)-21895;
int zero = 0;
unsigned int var_20 = 2280665351U;
short var_21 = (short)-18273;
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
