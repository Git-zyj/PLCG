#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)124;
unsigned char var_2 = (unsigned char)196;
unsigned short var_6 = (unsigned short)48922;
_Bool var_7 = (_Bool)0;
int var_11 = 1758237658;
long long int var_14 = -4697218013738378581LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)13;
unsigned char var_18 = (unsigned char)185;
int var_19 = -194492868;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
