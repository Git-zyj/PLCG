#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 74426274U;
int var_2 = 946358855;
signed char var_9 = (signed char)119;
_Bool var_10 = (_Bool)1;
long long int var_12 = 3888080233871795408LL;
long long int var_14 = 8961679435965403148LL;
int zero = 0;
unsigned char var_18 = (unsigned char)24;
unsigned long long int var_19 = 14994352576623928003ULL;
unsigned short var_20 = (unsigned short)7431;
short var_21 = (short)-12990;
void init() {
}

void checksum() {
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
