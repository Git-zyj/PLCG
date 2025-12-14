#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2933;
unsigned char var_3 = (unsigned char)77;
short var_4 = (short)-21710;
_Bool var_5 = (_Bool)0;
short var_7 = (short)1605;
int var_9 = -1569024703;
unsigned char var_11 = (unsigned char)85;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-8461;
unsigned short var_15 = (unsigned short)63172;
unsigned char var_16 = (unsigned char)140;
void init() {
}

void checksum() {
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
