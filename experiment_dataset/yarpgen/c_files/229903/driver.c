#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1083141016U;
unsigned short var_4 = (unsigned short)35878;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 11134338214276502819ULL;
unsigned long long int var_10 = 4379043184611766980ULL;
signed char var_11 = (signed char)22;
unsigned long long int var_12 = 3026626907636356210ULL;
unsigned short var_13 = (unsigned short)972;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-27493;
long long int var_20 = -912054404124677237LL;
long long int var_21 = 2290036361054671524LL;
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
