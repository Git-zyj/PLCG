#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19230;
short var_2 = (short)-22099;
unsigned int var_8 = 1134807667U;
unsigned char var_9 = (unsigned char)43;
unsigned char var_10 = (unsigned char)206;
int var_14 = 1078481024;
unsigned int var_15 = 1314630005U;
int zero = 0;
unsigned int var_17 = 4208000385U;
signed char var_18 = (signed char)60;
int var_19 = -954923457;
unsigned char var_20 = (unsigned char)209;
int var_21 = -1431775891;
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
