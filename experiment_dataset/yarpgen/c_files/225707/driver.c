#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3099479928532516329ULL;
short var_2 = (short)-12457;
unsigned short var_3 = (unsigned short)3053;
int var_4 = 1743086657;
unsigned short var_5 = (unsigned short)38163;
short var_6 = (short)9482;
long long int var_7 = -7263797811040938355LL;
unsigned long long int var_11 = 822710685374143933ULL;
signed char var_13 = (signed char)-62;
signed char var_15 = (signed char)27;
int zero = 0;
unsigned short var_16 = (unsigned short)17627;
unsigned int var_17 = 3111273930U;
unsigned char var_18 = (unsigned char)232;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)64377;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
