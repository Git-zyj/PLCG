#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)180;
short var_5 = (short)8838;
unsigned int var_7 = 3941151122U;
long long int var_9 = -5684237664232183132LL;
int zero = 0;
unsigned short var_12 = (unsigned short)42889;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)1835;
unsigned short var_15 = (unsigned short)31556;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
