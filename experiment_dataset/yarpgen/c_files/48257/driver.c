#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29686;
long long int var_4 = 2120916239817773290LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)2251;
unsigned int var_12 = 3182299575U;
long long int var_16 = -4170132473863950311LL;
int zero = 0;
unsigned short var_18 = (unsigned short)52382;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
