#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)41945;
signed char var_6 = (signed char)-67;
unsigned short var_7 = (unsigned short)7909;
int var_10 = -763296363;
unsigned short var_12 = (unsigned short)52612;
int zero = 0;
unsigned int var_15 = 571821920U;
short var_16 = (short)-24200;
unsigned long long int var_17 = 14467919286730898488ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
