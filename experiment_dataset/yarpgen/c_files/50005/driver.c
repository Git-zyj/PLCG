#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned long long int var_1 = 4076054190975940398ULL;
unsigned int var_3 = 866507514U;
unsigned short var_4 = (unsigned short)49298;
unsigned char var_6 = (unsigned char)43;
unsigned char var_7 = (unsigned char)19;
int zero = 0;
signed char var_18 = (signed char)-37;
short var_19 = (short)15696;
unsigned int var_20 = 1282410856U;
short var_21 = (short)5086;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
