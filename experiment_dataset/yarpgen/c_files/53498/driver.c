#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20425;
long long int var_1 = 505081225038717025LL;
unsigned long long int var_3 = 11847828337560121600ULL;
unsigned char var_4 = (unsigned char)63;
unsigned char var_5 = (unsigned char)93;
unsigned long long int var_6 = 315443330051665226ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-17647;
unsigned long long int var_9 = 14687027181793751131ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1630513280U;
unsigned long long int var_12 = 11439936513867312868ULL;
unsigned char var_13 = (unsigned char)58;
signed char var_14 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
