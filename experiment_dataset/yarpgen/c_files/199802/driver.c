#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 471130712;
unsigned int var_3 = 2534840164U;
unsigned short var_6 = (unsigned short)18722;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_17 = (unsigned char)68;
short var_18 = (short)-28085;
int zero = 0;
short var_20 = (short)-3453;
unsigned int var_21 = 3836824318U;
unsigned char var_22 = (unsigned char)126;
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
