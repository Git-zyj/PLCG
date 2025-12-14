#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25228;
unsigned int var_4 = 1668076109U;
long long int var_9 = -6386522221786551821LL;
short var_12 = (short)30621;
unsigned char var_13 = (unsigned char)46;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)27674;
short var_16 = (short)32679;
unsigned char var_17 = (unsigned char)94;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 514198811U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
