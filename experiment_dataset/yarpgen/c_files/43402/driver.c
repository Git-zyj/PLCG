#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 2437322985U;
unsigned char var_3 = (unsigned char)186;
unsigned short var_4 = (unsigned short)63098;
_Bool var_5 = (_Bool)1;
int var_6 = 26653400;
signed char var_7 = (signed char)-51;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)-12748;
unsigned short var_11 = (unsigned short)1203;
_Bool var_12 = (_Bool)1;
int var_13 = -553479494;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
