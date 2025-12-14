#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22884;
unsigned short var_2 = (unsigned short)37583;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)6;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6947818296141406369LL;
long long int var_9 = -4078775310481344821LL;
long long int var_10 = 2629172486124759396LL;
int zero = 0;
unsigned char var_12 = (unsigned char)141;
unsigned int var_13 = 1926347232U;
int var_14 = -1317169370;
unsigned char var_15 = (unsigned char)125;
int var_16 = 1127193151;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
