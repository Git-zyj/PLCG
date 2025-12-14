#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29685;
unsigned char var_5 = (unsigned char)249;
long long int var_7 = 3968993544250602184LL;
unsigned int var_9 = 2969662511U;
unsigned long long int var_12 = 15181063312172897394ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)49062;
signed char var_14 = (signed char)115;
long long int var_15 = 2827542519150732055LL;
unsigned char var_16 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
