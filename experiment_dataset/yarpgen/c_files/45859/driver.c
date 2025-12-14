#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12131806993700425592ULL;
unsigned int var_1 = 425587319U;
unsigned char var_3 = (unsigned char)198;
_Bool var_7 = (_Bool)0;
short var_8 = (short)22703;
unsigned short var_10 = (unsigned short)29953;
int zero = 0;
unsigned int var_11 = 2583385355U;
unsigned short var_12 = (unsigned short)25280;
unsigned char var_13 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
