#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned char var_2 = (unsigned char)191;
unsigned short var_4 = (unsigned short)11214;
int var_5 = 1429487821;
unsigned char var_11 = (unsigned char)28;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)186;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
unsigned int var_19 = 2922397957U;
unsigned short var_20 = (unsigned short)11531;
_Bool var_21 = (_Bool)0;
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
