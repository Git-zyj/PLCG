#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25810;
int var_3 = 1485016038;
int var_4 = 891132205;
int var_5 = 1661376057;
signed char var_6 = (signed char)55;
unsigned short var_8 = (unsigned short)37678;
signed char var_10 = (signed char)50;
int zero = 0;
long long int var_12 = 7138521123863255268LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
