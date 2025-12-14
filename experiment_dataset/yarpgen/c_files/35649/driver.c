#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
short var_1 = (short)30256;
short var_2 = (short)-8368;
short var_3 = (short)-5095;
long long int var_4 = 3778245650695399710LL;
unsigned short var_5 = (unsigned short)17417;
int var_9 = 519626031;
unsigned short var_10 = (unsigned short)50440;
unsigned short var_11 = (unsigned short)57536;
unsigned int var_12 = 2647582835U;
unsigned short var_13 = (unsigned short)48628;
signed char var_14 = (signed char)-81;
unsigned short var_15 = (unsigned short)42947;
int zero = 0;
int var_19 = -442548111;
unsigned short var_20 = (unsigned short)38046;
unsigned short var_21 = (unsigned short)16082;
unsigned int var_22 = 309827938U;
unsigned short var_23 = (unsigned short)42205;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
