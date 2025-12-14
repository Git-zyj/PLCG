#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
long long int var_2 = -8719013471727774855LL;
long long int var_3 = 873044061871390144LL;
short var_4 = (short)26088;
unsigned long long int var_6 = 11432081330172889019ULL;
unsigned short var_7 = (unsigned short)37691;
long long int var_8 = -882968966440864268LL;
unsigned long long int var_9 = 7296849034406299884ULL;
unsigned short var_11 = (unsigned short)55420;
unsigned short var_12 = (unsigned short)7710;
short var_13 = (short)-4644;
unsigned short var_14 = (unsigned short)29318;
unsigned short var_15 = (unsigned short)5755;
int zero = 0;
unsigned short var_17 = (unsigned short)7402;
signed char var_18 = (signed char)-29;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)21;
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
