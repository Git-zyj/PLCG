#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
int var_3 = -1823266569;
unsigned char var_4 = (unsigned char)123;
short var_6 = (short)-10435;
short var_9 = (short)28335;
short var_11 = (short)28665;
unsigned int var_13 = 2815342448U;
unsigned short var_14 = (unsigned short)6169;
unsigned char var_19 = (unsigned char)112;
int zero = 0;
unsigned int var_20 = 926628074U;
int var_21 = -349356644;
signed char var_22 = (signed char)-88;
unsigned short var_23 = (unsigned short)80;
signed char var_24 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
