#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 92617575862720371LL;
unsigned char var_5 = (unsigned char)119;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 663700138372701316ULL;
int zero = 0;
short var_11 = (short)-15083;
unsigned short var_12 = (unsigned short)31840;
unsigned long long int var_13 = 1678540170552966128ULL;
unsigned short var_14 = (unsigned short)54343;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
