#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58755;
int var_1 = 676673617;
unsigned char var_2 = (unsigned char)13;
unsigned char var_3 = (unsigned char)4;
int var_8 = -1573788897;
short var_17 = (short)2638;
int zero = 0;
unsigned int var_18 = 778905639U;
int var_19 = 1154664711;
_Bool var_20 = (_Bool)0;
int var_21 = 558556754;
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
