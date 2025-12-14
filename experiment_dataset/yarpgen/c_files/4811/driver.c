#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59809;
unsigned char var_1 = (unsigned char)106;
short var_2 = (short)10054;
unsigned int var_3 = 3223693512U;
unsigned char var_7 = (unsigned char)105;
unsigned char var_9 = (unsigned char)223;
unsigned int var_10 = 390721899U;
long long int var_12 = -3008092331970908672LL;
int var_13 = -1852209157;
short var_14 = (short)15799;
unsigned long long int var_16 = 14186862024689399446ULL;
unsigned short var_17 = (unsigned short)50786;
int zero = 0;
int var_20 = -689138078;
_Bool var_21 = (_Bool)1;
long long int var_22 = 2421600106915403677LL;
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
