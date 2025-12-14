#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1809855086;
signed char var_3 = (signed char)99;
unsigned int var_4 = 654959960U;
unsigned char var_6 = (unsigned char)150;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)70;
unsigned int var_13 = 3122785914U;
int zero = 0;
unsigned int var_16 = 1456474109U;
unsigned int var_17 = 3047283318U;
unsigned char var_18 = (unsigned char)177;
unsigned char var_19 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
