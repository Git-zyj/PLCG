#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42984;
unsigned int var_1 = 3101170327U;
unsigned int var_2 = 3314099848U;
int var_3 = 560972626;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)154;
unsigned int var_8 = 1705756585U;
short var_10 = (short)19660;
signed char var_12 = (signed char)-23;
long long int var_13 = -4806510633820187891LL;
int zero = 0;
unsigned long long int var_14 = 7363179746832142110ULL;
long long int var_15 = -519817399303939299LL;
int var_16 = -1259880652;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
