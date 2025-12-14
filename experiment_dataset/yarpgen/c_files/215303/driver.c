#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)225;
int var_8 = 90803132;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5825949544562505963LL;
signed char var_13 = (signed char)-18;
unsigned int var_14 = 1246277304U;
unsigned short var_16 = (unsigned short)15014;
unsigned short var_17 = (unsigned short)42352;
int zero = 0;
unsigned short var_18 = (unsigned short)29381;
int var_19 = -1889059612;
long long int var_20 = -3920621978219170357LL;
int var_21 = -1490591964;
signed char var_22 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
