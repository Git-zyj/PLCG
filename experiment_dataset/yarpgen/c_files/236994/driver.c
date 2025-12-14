#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = 585336728;
unsigned long long int var_6 = 7952719252627633471ULL;
unsigned long long int var_7 = 7253308653472005130ULL;
unsigned short var_11 = (unsigned short)13799;
unsigned long long int var_12 = 17239686665958902349ULL;
unsigned short var_13 = (unsigned short)35484;
short var_17 = (short)-24292;
int zero = 0;
int var_20 = -1227126391;
signed char var_21 = (signed char)-73;
unsigned char var_22 = (unsigned char)150;
unsigned short var_23 = (unsigned short)64265;
void init() {
}

void checksum() {
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
