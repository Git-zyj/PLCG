#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1630137305;
unsigned long long int var_1 = 3101595228630624674ULL;
signed char var_4 = (signed char)8;
unsigned short var_5 = (unsigned short)33129;
int var_6 = -1386471900;
long long int var_10 = 2576751612442480729LL;
unsigned char var_11 = (unsigned char)198;
long long int var_14 = 849577256621809985LL;
short var_17 = (short)-20169;
signed char var_19 = (signed char)28;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)206;
short var_22 = (short)22198;
int var_23 = 486757678;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
