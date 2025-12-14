#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28781;
long long int var_1 = -4253024613728055979LL;
short var_3 = (short)26379;
unsigned char var_4 = (unsigned char)13;
unsigned short var_5 = (unsigned short)35356;
long long int var_6 = -7237827806707922043LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1380590953U;
unsigned int var_10 = 361734279U;
long long int var_11 = -5385701981609752065LL;
unsigned long long int var_14 = 4245873221195993188ULL;
int zero = 0;
int var_16 = -900688251;
long long int var_17 = 5760147731526947688LL;
int var_18 = -843722930;
int var_19 = -981995314;
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
