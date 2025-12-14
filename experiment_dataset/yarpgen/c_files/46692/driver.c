#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12594566605467378562ULL;
signed char var_2 = (signed char)-73;
short var_4 = (short)1163;
unsigned int var_5 = 2162124338U;
unsigned short var_7 = (unsigned short)41309;
short var_8 = (short)-16009;
long long int var_9 = -3021028220143475902LL;
unsigned int var_10 = 3440376888U;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-14019;
signed char var_16 = (signed char)70;
int zero = 0;
unsigned short var_17 = (unsigned short)51765;
signed char var_18 = (signed char)9;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)67;
signed char var_21 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
