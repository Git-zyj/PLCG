#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_4 = (short)8351;
unsigned char var_6 = (unsigned char)27;
signed char var_7 = (signed char)-73;
unsigned short var_9 = (unsigned short)6104;
unsigned short var_16 = (unsigned short)48456;
short var_17 = (short)31273;
int zero = 0;
unsigned int var_20 = 494913940U;
unsigned int var_21 = 1247991443U;
unsigned char var_22 = (unsigned char)245;
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
