#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1508623473;
unsigned char var_1 = (unsigned char)185;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 14518016942424828965ULL;
unsigned int var_7 = 621379991U;
unsigned int var_8 = 1568744720U;
int var_10 = 1001824226;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-5;
short var_13 = (short)24427;
signed char var_14 = (signed char)45;
int zero = 0;
int var_15 = -1494564774;
int var_16 = 643911516;
long long int var_17 = 5027292378995329235LL;
int var_18 = 1823437551;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
