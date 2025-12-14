#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_7 = (short)20118;
unsigned int var_11 = 2199558330U;
unsigned char var_13 = (unsigned char)189;
unsigned char var_14 = (unsigned char)194;
unsigned short var_15 = (unsigned short)8594;
unsigned int var_16 = 2613097985U;
unsigned int var_18 = 4070860676U;
int zero = 0;
unsigned short var_19 = (unsigned short)28372;
long long int var_20 = 33904914978208944LL;
unsigned int var_21 = 4026413084U;
void init() {
}

void checksum() {
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
