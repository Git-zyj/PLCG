#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8587790017231854962LL;
long long int var_1 = -5701745404829443316LL;
unsigned long long int var_2 = 15473107517280721931ULL;
unsigned short var_3 = (unsigned short)8280;
unsigned char var_5 = (unsigned char)252;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)11;
unsigned char var_9 = (unsigned char)150;
long long int var_12 = -2172409015844759378LL;
int zero = 0;
short var_14 = (short)-28464;
int var_15 = -1357281833;
signed char var_16 = (signed char)-83;
unsigned int var_17 = 3595374167U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
