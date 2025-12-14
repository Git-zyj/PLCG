#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5119131574617821317LL;
unsigned int var_8 = 4089289236U;
_Bool var_9 = (_Bool)0;
int var_11 = 2031093978;
unsigned char var_12 = (unsigned char)126;
short var_13 = (short)-16288;
int zero = 0;
unsigned short var_20 = (unsigned short)57921;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
