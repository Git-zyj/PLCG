#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 720134995;
signed char var_4 = (signed char)24;
int var_6 = 160242930;
unsigned short var_9 = (unsigned short)37731;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
unsigned char var_15 = (unsigned char)26;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)201;
unsigned int var_18 = 1122356922U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
