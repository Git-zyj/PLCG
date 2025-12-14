#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1460853916;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)5063;
unsigned char var_12 = (unsigned char)81;
unsigned char var_16 = (unsigned char)168;
short var_18 = (short)-32118;
int zero = 0;
int var_19 = -1982589736;
long long int var_20 = 1747827449577071668LL;
unsigned short var_21 = (unsigned short)57951;
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
