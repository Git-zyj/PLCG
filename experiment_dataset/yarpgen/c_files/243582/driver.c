#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1339141255U;
signed char var_4 = (signed char)-68;
long long int var_6 = -7569394206976442025LL;
unsigned short var_7 = (unsigned short)6764;
int var_9 = -710061806;
int zero = 0;
short var_11 = (short)-24941;
long long int var_12 = -5127993594930002998LL;
int var_13 = -1776835639;
unsigned char var_14 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
