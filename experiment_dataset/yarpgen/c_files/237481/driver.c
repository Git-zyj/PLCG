#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)25890;
short var_3 = (short)-1014;
short var_7 = (short)1460;
short var_8 = (short)9070;
unsigned long long int var_9 = 8174365280542721268ULL;
unsigned int var_10 = 3436050027U;
unsigned char var_13 = (unsigned char)118;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)90;
signed char var_17 = (signed char)-87;
signed char var_18 = (signed char)91;
unsigned long long int var_19 = 691507295120635954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
