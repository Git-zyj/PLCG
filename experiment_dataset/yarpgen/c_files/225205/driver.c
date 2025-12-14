#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7858747604381034911LL;
unsigned short var_1 = (unsigned short)9955;
int var_2 = -819043143;
int var_3 = -154873818;
unsigned long long int var_4 = 16617190077035449829ULL;
int var_5 = 316107031;
long long int var_6 = -1879319207959748666LL;
unsigned int var_7 = 4052834208U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2052783438U;
int var_10 = -51120254;
short var_11 = (short)28740;
int zero = 0;
short var_13 = (short)4829;
unsigned int var_14 = 381784543U;
long long int var_15 = 4011149785475804274LL;
unsigned long long int var_16 = 1686226961348431517ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
