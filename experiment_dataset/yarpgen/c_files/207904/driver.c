#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23437;
int var_1 = 1490869539;
unsigned int var_3 = 3987109100U;
unsigned char var_6 = (unsigned char)91;
int var_7 = 1570718143;
int var_8 = 693280764;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)76;
int zero = 0;
unsigned short var_12 = (unsigned short)59088;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)8806;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
