#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2011811098;
unsigned char var_8 = (unsigned char)1;
signed char var_9 = (signed char)-75;
_Bool var_10 = (_Bool)1;
unsigned long long int var_13 = 17189368608893894213ULL;
short var_14 = (short)-18661;
short var_16 = (short)-32113;
int var_17 = -385473592;
int zero = 0;
long long int var_20 = -359335134366857514LL;
unsigned char var_21 = (unsigned char)26;
unsigned short var_22 = (unsigned short)5860;
unsigned int var_23 = 1585621787U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
