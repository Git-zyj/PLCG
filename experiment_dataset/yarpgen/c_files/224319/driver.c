#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-111;
signed char var_7 = (signed char)87;
int var_8 = 1890893838;
unsigned short var_9 = (unsigned short)60022;
unsigned char var_10 = (unsigned char)228;
signed char var_12 = (signed char)112;
unsigned short var_13 = (unsigned short)11748;
int zero = 0;
int var_18 = -1194872612;
short var_19 = (short)-402;
unsigned short var_20 = (unsigned short)17878;
short var_21 = (short)16164;
short var_22 = (short)914;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
