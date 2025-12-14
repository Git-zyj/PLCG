#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7981;
unsigned int var_3 = 65525480U;
int var_4 = -859536566;
int var_5 = -246229595;
unsigned int var_6 = 1804843657U;
unsigned short var_9 = (unsigned short)25029;
short var_10 = (short)-26158;
int zero = 0;
long long int var_11 = 877266630502022590LL;
unsigned short var_12 = (unsigned short)15189;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)62906;
signed char var_15 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
