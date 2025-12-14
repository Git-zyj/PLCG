#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 131456167U;
unsigned short var_7 = (unsigned short)29428;
long long int var_10 = 5885909378797737856LL;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)31303;
int zero = 0;
unsigned char var_19 = (unsigned char)66;
unsigned char var_20 = (unsigned char)237;
signed char var_21 = (signed char)-79;
int var_22 = 1590393674;
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
