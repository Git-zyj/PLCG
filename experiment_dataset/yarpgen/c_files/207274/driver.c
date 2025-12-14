#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22512;
int var_2 = -1192294181;
short var_3 = (short)12652;
unsigned long long int var_5 = 8802600215247131119ULL;
unsigned char var_6 = (unsigned char)165;
unsigned long long int var_7 = 4841179508120680950ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)69;
unsigned short var_11 = (unsigned short)8636;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1004488813U;
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
