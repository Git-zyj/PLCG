#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63826;
short var_4 = (short)18429;
unsigned short var_5 = (unsigned short)15423;
unsigned char var_6 = (unsigned char)106;
short var_9 = (short)12277;
int zero = 0;
signed char var_10 = (signed char)-17;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)21989;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
