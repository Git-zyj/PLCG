#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3134;
unsigned long long int var_5 = 12738734112914605322ULL;
unsigned short var_9 = (unsigned short)15270;
signed char var_10 = (signed char)-71;
unsigned short var_15 = (unsigned short)34653;
short var_16 = (short)7271;
unsigned short var_18 = (unsigned short)44531;
int zero = 0;
int var_19 = 2021485524;
unsigned int var_20 = 4008056448U;
short var_21 = (short)-30436;
unsigned short var_22 = (unsigned short)55664;
signed char var_23 = (signed char)110;
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
