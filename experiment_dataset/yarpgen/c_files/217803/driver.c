#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)71;
long long int var_2 = -4880465107873062382LL;
unsigned char var_6 = (unsigned char)175;
unsigned long long int var_7 = 17957737876039563721ULL;
signed char var_8 = (signed char)67;
signed char var_9 = (signed char)-37;
int var_10 = -1021992292;
short var_11 = (short)-14045;
unsigned short var_12 = (unsigned short)18205;
unsigned long long int var_13 = 17646242555361951774ULL;
int var_15 = -1383635797;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -1952656067;
long long int var_19 = -7641009869013971014LL;
int var_20 = 443785968;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
