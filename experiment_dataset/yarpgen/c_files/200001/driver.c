#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 30269139U;
signed char var_3 = (signed char)-120;
unsigned short var_5 = (unsigned short)22070;
unsigned char var_6 = (unsigned char)205;
unsigned char var_7 = (unsigned char)45;
unsigned long long int var_9 = 7162971905270470775ULL;
unsigned int var_10 = 1797929631U;
int zero = 0;
signed char var_11 = (signed char)-99;
signed char var_12 = (signed char)-69;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
