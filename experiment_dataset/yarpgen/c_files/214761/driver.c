#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2569943257U;
unsigned short var_1 = (unsigned short)37285;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1146529476U;
short var_4 = (short)-2283;
long long int var_5 = -2972729074724087975LL;
unsigned short var_6 = (unsigned short)3083;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 4214376687U;
short var_9 = (short)29001;
unsigned char var_10 = (unsigned char)249;
short var_11 = (short)-2514;
unsigned int var_12 = 3112547418U;
int zero = 0;
short var_13 = (short)16220;
long long int var_14 = -6460468802918126418LL;
short var_15 = (short)4561;
unsigned int var_16 = 773899384U;
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
