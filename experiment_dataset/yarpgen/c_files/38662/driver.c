#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1223569494;
unsigned long long int var_2 = 2904865067729642345ULL;
unsigned int var_3 = 1039896391U;
int var_4 = -360783862;
int var_5 = -478211783;
unsigned char var_7 = (unsigned char)206;
long long int var_8 = 3496716635297540015LL;
unsigned short var_9 = (unsigned short)176;
unsigned long long int var_12 = 11875053496995638017ULL;
unsigned long long int var_14 = 3640918013736229616ULL;
long long int var_15 = -7128712212828186110LL;
int zero = 0;
int var_17 = -1680460414;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)116;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
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
