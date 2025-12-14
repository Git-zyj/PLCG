#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
unsigned long long int var_2 = 9765873707236677782ULL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-11;
int var_5 = -1142880918;
unsigned short var_7 = (unsigned short)57342;
unsigned char var_8 = (unsigned char)247;
short var_10 = (short)-7190;
short var_11 = (short)-25785;
unsigned short var_12 = (unsigned short)20557;
unsigned int var_13 = 3365261603U;
signed char var_16 = (signed char)125;
unsigned int var_18 = 1386683718U;
int zero = 0;
int var_20 = 733190471;
signed char var_21 = (signed char)-36;
unsigned int var_22 = 2926452634U;
void init() {
}

void checksum() {
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
