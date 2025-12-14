#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3389765695U;
short var_4 = (short)11620;
signed char var_8 = (signed char)37;
unsigned short var_9 = (unsigned short)25589;
long long int var_11 = 3914648454686699304LL;
unsigned short var_17 = (unsigned short)38282;
int zero = 0;
unsigned char var_19 = (unsigned char)45;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)34987;
short var_22 = (short)5769;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
