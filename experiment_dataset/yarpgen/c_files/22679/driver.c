#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -657783071;
unsigned short var_5 = (unsigned short)17046;
unsigned int var_8 = 11854871U;
unsigned short var_9 = (unsigned short)45040;
long long int var_11 = 3805456675786936836LL;
int zero = 0;
int var_20 = -1836101542;
unsigned char var_21 = (unsigned char)248;
_Bool var_22 = (_Bool)0;
int var_23 = 1193866867;
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
