#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4561779542049234103LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 399310155U;
unsigned int var_5 = 1667812679U;
signed char var_7 = (signed char)106;
signed char var_11 = (signed char)85;
short var_12 = (short)-15427;
int zero = 0;
signed char var_16 = (signed char)37;
unsigned char var_17 = (unsigned char)23;
unsigned short var_18 = (unsigned short)49353;
signed char var_19 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
