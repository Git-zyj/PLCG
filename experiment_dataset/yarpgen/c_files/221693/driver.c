#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned char var_1 = (unsigned char)16;
unsigned short var_3 = (unsigned short)136;
unsigned char var_4 = (unsigned char)46;
unsigned int var_5 = 2414628806U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 6335280993757127043ULL;
int var_14 = 16006431;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5560708119191293776ULL;
int var_17 = 1094606322;
unsigned long long int var_18 = 6910150027458441530ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
