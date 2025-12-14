#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)-28571;
int var_5 = -1712062198;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)98;
unsigned int var_9 = 2900007567U;
short var_13 = (short)-6295;
unsigned int var_16 = 3215669384U;
int zero = 0;
short var_17 = (short)-29962;
short var_18 = (short)22952;
unsigned long long int var_19 = 6571973206244105872ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
