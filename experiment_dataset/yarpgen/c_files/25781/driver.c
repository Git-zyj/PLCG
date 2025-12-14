#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)1;
short var_5 = (short)-21153;
long long int var_9 = -4073600304769886214LL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)16098;
unsigned int var_16 = 3796474071U;
int zero = 0;
int var_19 = -107919352;
unsigned char var_20 = (unsigned char)126;
long long int var_21 = 6489214857747562707LL;
unsigned int var_22 = 889933049U;
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
