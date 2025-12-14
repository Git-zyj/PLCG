#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1794031206;
_Bool var_5 = (_Bool)1;
unsigned int var_9 = 3135703505U;
short var_12 = (short)25255;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-46;
short var_19 = (short)-30681;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
