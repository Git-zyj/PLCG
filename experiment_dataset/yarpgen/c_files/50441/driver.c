#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)5;
short var_5 = (short)-29839;
unsigned int var_7 = 3068097393U;
short var_8 = (short)29457;
int var_13 = 2147477151;
unsigned long long int var_14 = 15900016727143711710ULL;
unsigned int var_15 = 2018778044U;
int zero = 0;
unsigned short var_17 = (unsigned short)3090;
unsigned long long int var_18 = 10018736224600033824ULL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-80;
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
