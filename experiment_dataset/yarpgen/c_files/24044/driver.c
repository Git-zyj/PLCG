#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -651537956;
long long int var_2 = -9117914422843756250LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 1707032366315462277ULL;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)116;
unsigned char var_15 = (unsigned char)15;
long long int var_16 = -7175596258954935841LL;
int zero = 0;
int var_17 = -312715254;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)55220;
signed char var_21 = (signed char)-75;
void init() {
}

void checksum() {
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
