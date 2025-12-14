#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29998;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-120;
short var_10 = (short)-26224;
_Bool var_12 = (_Bool)0;
long long int var_13 = -7372322038809513951LL;
short var_14 = (short)-24438;
unsigned int var_15 = 4129114365U;
unsigned char var_16 = (unsigned char)186;
int zero = 0;
long long int var_17 = -7942633177376824723LL;
unsigned short var_18 = (unsigned short)38208;
int var_19 = -719340229;
signed char var_20 = (signed char)-90;
unsigned int var_21 = 92804449U;
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
