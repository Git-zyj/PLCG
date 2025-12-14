#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34064;
unsigned char var_4 = (unsigned char)163;
signed char var_8 = (signed char)-125;
unsigned char var_9 = (unsigned char)154;
unsigned short var_12 = (unsigned short)2438;
int zero = 0;
int var_13 = -1121064719;
_Bool var_14 = (_Bool)0;
int var_15 = -595210721;
unsigned int var_16 = 2019933400U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
