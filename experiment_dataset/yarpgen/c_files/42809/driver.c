#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -769497428658557357LL;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)33704;
short var_3 = (short)27998;
unsigned char var_4 = (unsigned char)18;
unsigned char var_5 = (unsigned char)118;
unsigned short var_8 = (unsigned short)22353;
unsigned short var_9 = (unsigned short)23342;
long long int var_10 = -4202162594151771889LL;
int zero = 0;
unsigned int var_12 = 1696191241U;
unsigned char var_13 = (unsigned char)42;
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
