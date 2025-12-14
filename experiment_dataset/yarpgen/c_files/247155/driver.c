#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14861603120502920031ULL;
signed char var_2 = (signed char)-111;
unsigned short var_4 = (unsigned short)52801;
unsigned int var_5 = 2660666680U;
short var_6 = (short)32071;
long long int var_7 = -6221347370757377581LL;
unsigned int var_8 = 2103657937U;
int zero = 0;
long long int var_10 = -1613907994717739975LL;
unsigned char var_11 = (unsigned char)167;
unsigned int var_12 = 523632983U;
unsigned char var_13 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
