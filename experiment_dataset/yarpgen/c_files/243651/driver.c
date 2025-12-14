#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61331;
short var_2 = (short)10128;
short var_3 = (short)-31120;
int var_4 = -1318643960;
unsigned char var_5 = (unsigned char)185;
unsigned long long int var_6 = 12984979032199482948ULL;
signed char var_7 = (signed char)-101;
unsigned long long int var_10 = 9852355361661916691ULL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)8945;
unsigned int var_16 = 2471707075U;
unsigned char var_17 = (unsigned char)159;
void init() {
}

void checksum() {
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
