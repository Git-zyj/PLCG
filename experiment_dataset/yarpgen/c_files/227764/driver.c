#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3648786464U;
unsigned char var_4 = (unsigned char)146;
unsigned int var_5 = 322981821U;
unsigned long long int var_6 = 996307487034402499ULL;
unsigned long long int var_8 = 14900640709620525159ULL;
unsigned char var_11 = (unsigned char)185;
int zero = 0;
unsigned int var_12 = 623763415U;
unsigned short var_13 = (unsigned short)8059;
long long int var_14 = 193277239883308351LL;
signed char var_15 = (signed char)91;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
