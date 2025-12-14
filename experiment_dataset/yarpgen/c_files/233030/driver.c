#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
unsigned short var_4 = (unsigned short)11003;
unsigned char var_5 = (unsigned char)54;
unsigned short var_7 = (unsigned short)32572;
long long int var_11 = 8836030532225934650LL;
int zero = 0;
unsigned int var_13 = 556828387U;
int var_14 = 648260335;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2660943728142502376LL;
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
