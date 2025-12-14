#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53555;
unsigned int var_2 = 1361440367U;
unsigned char var_6 = (unsigned char)169;
unsigned int var_7 = 2567297520U;
long long int var_8 = 5882753934063409665LL;
unsigned short var_11 = (unsigned short)38378;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-11580;
unsigned short var_14 = (unsigned short)54642;
unsigned char var_15 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
