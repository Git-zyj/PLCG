#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51782;
unsigned short var_2 = (unsigned short)25896;
int var_3 = 1641590005;
unsigned int var_5 = 1649867592U;
unsigned int var_8 = 46967982U;
long long int var_11 = -5134766472400458001LL;
int var_14 = 1257610435;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 14507431835871184036ULL;
short var_18 = (short)11306;
unsigned int var_19 = 3843893213U;
unsigned short var_20 = (unsigned short)14332;
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
