#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
short var_3 = (short)31011;
signed char var_4 = (signed char)-8;
long long int var_5 = -7612808462698659444LL;
unsigned char var_7 = (unsigned char)173;
long long int var_14 = -2680218671928137462LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)15713;
unsigned long long int var_18 = 10489436435532385452ULL;
unsigned short var_19 = (unsigned short)45465;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
