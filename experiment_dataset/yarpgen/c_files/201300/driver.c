#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-16310;
unsigned char var_2 = (unsigned char)125;
unsigned int var_3 = 1194946730U;
unsigned short var_4 = (unsigned short)60879;
unsigned int var_6 = 389866832U;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)69;
unsigned long long int var_11 = 7962054091335354416ULL;
unsigned long long int var_14 = 5000364293882896980ULL;
unsigned long long int var_16 = 13213313781988137042ULL;
int zero = 0;
short var_18 = (short)-20785;
unsigned int var_19 = 1151412536U;
short var_20 = (short)-21098;
unsigned short var_21 = (unsigned short)19404;
unsigned short var_22 = (unsigned short)59411;
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
