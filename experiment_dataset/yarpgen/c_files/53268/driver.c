#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 1038107533179634088ULL;
short var_2 = (short)24092;
signed char var_3 = (signed char)-15;
signed char var_4 = (signed char)-17;
int var_5 = 934851432;
unsigned long long int var_6 = 6938523742328996757ULL;
unsigned long long int var_7 = 2619953578123700684ULL;
short var_8 = (short)-7881;
long long int var_10 = -2086884615832065936LL;
unsigned short var_11 = (unsigned short)49351;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4771629464546502009LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)65169;
unsigned long long int var_16 = 16311587859551035295ULL;
int var_17 = 605946458;
int var_18 = 999841643;
short var_19 = (short)22313;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
