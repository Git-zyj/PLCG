#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2757293898974032215LL;
short var_3 = (short)16282;
int var_4 = -257086327;
unsigned long long int var_6 = 17074085862621202124ULL;
unsigned char var_10 = (unsigned char)68;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
unsigned int var_16 = 2941484702U;
unsigned int var_17 = 2795146091U;
unsigned short var_18 = (unsigned short)52859;
_Bool var_19 = (_Bool)0;
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
