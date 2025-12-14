#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)190;
unsigned long long int var_9 = 13103024980536238213ULL;
signed char var_10 = (signed char)-63;
signed char var_12 = (signed char)-83;
short var_14 = (short)11777;
int var_15 = -1898763882;
unsigned char var_17 = (unsigned char)73;
int zero = 0;
signed char var_19 = (signed char)-76;
unsigned short var_20 = (unsigned short)2424;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-19;
void init() {
}

void checksum() {
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
