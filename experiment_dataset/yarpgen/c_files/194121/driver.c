#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)11310;
long long int var_4 = 2771207068082890822LL;
long long int var_5 = 4188543456750477967LL;
unsigned long long int var_7 = 8787373024270678416ULL;
long long int var_8 = -3799832967953415560LL;
unsigned char var_10 = (unsigned char)72;
short var_11 = (short)-2199;
unsigned short var_12 = (unsigned short)41734;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1881474632U;
int var_16 = 1287769482;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
