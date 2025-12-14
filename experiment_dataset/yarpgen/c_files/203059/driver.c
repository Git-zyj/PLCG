#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1475420553;
int var_2 = -954919470;
unsigned short var_4 = (unsigned short)60277;
int var_5 = 553773987;
unsigned long long int var_6 = 11173777000331784957ULL;
short var_10 = (short)-9338;
short var_11 = (short)-17000;
long long int var_14 = 2385000957536978804LL;
unsigned char var_15 = (unsigned char)164;
long long int var_16 = 76731892315576687LL;
int zero = 0;
unsigned char var_20 = (unsigned char)182;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
