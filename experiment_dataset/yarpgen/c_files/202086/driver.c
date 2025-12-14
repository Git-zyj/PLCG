#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)58;
unsigned char var_3 = (unsigned char)101;
short var_4 = (short)15252;
unsigned char var_5 = (unsigned char)227;
int var_8 = 1505898932;
_Bool var_9 = (_Bool)1;
short var_10 = (short)20868;
int var_11 = 765895323;
unsigned short var_12 = (unsigned short)44582;
unsigned char var_15 = (unsigned char)51;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)13640;
short var_21 = (short)8774;
void init() {
}

void checksum() {
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
