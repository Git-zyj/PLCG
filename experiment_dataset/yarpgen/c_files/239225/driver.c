#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14734;
unsigned int var_4 = 1766732033U;
long long int var_5 = -1716749666494365059LL;
unsigned short var_11 = (unsigned short)6376;
signed char var_12 = (signed char)102;
unsigned char var_13 = (unsigned char)63;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = -7316152550067111869LL;
unsigned char var_19 = (unsigned char)148;
short var_20 = (short)11779;
unsigned short var_21 = (unsigned short)28318;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
