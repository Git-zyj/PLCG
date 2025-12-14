#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3600249919U;
unsigned int var_1 = 430075191U;
unsigned int var_2 = 229209038U;
unsigned char var_3 = (unsigned char)120;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1391818816U;
short var_11 = (short)31755;
unsigned char var_13 = (unsigned char)44;
short var_14 = (short)-22116;
short var_16 = (short)22378;
short var_17 = (short)-20285;
signed char var_18 = (signed char)10;
int zero = 0;
long long int var_19 = 4955077676130191541LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-56;
void init() {
}

void checksum() {
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
