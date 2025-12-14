#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45369;
unsigned char var_4 = (unsigned char)42;
unsigned char var_5 = (unsigned char)1;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)169;
int var_13 = -1801469180;
_Bool var_14 = (_Bool)0;
long long int var_15 = -790859011493332616LL;
int zero = 0;
unsigned int var_16 = 740283100U;
long long int var_17 = 1265484204328512375LL;
unsigned char var_18 = (unsigned char)47;
unsigned char var_19 = (unsigned char)145;
unsigned int var_20 = 160019035U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
