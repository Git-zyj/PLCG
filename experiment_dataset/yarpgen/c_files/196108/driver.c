#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2634991995402480084LL;
short var_1 = (short)-19494;
short var_3 = (short)-8238;
unsigned long long int var_6 = 18044985950726284867ULL;
unsigned int var_9 = 795542201U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 3476092063856616497LL;
unsigned short var_13 = (unsigned short)53606;
unsigned char var_14 = (unsigned char)248;
unsigned short var_15 = (unsigned short)29038;
void init() {
}

void checksum() {
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
