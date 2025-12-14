#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11988;
unsigned int var_9 = 2249146138U;
_Bool var_10 = (_Bool)0;
int var_14 = -2025069775;
unsigned short var_16 = (unsigned short)10350;
int zero = 0;
int var_19 = 1278403492;
unsigned short var_20 = (unsigned short)3536;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3434465549U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
