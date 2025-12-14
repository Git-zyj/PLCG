#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2222096848U;
short var_2 = (short)-25612;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 634785548U;
unsigned char var_8 = (unsigned char)233;
unsigned short var_10 = (unsigned short)11987;
long long int var_13 = 3775017487144631116LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)85;
unsigned short var_20 = (unsigned short)17649;
unsigned int var_21 = 176389416U;
unsigned short var_22 = (unsigned short)60939;
unsigned short var_23 = (unsigned short)21033;
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
