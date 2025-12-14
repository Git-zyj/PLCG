#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20913;
unsigned short var_2 = (unsigned short)58907;
unsigned short var_3 = (unsigned short)32213;
unsigned short var_4 = (unsigned short)35299;
_Bool var_5 = (_Bool)1;
int var_10 = 391218621;
signed char var_13 = (signed char)-40;
long long int var_14 = 8925299915932747154LL;
int zero = 0;
signed char var_17 = (signed char)-80;
short var_18 = (short)30568;
long long int var_19 = 3557506806723644473LL;
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
