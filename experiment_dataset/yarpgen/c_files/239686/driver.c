#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9985067316042307908ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-17;
unsigned long long int var_3 = 13926544050416143539ULL;
unsigned long long int var_4 = 260523980916963984ULL;
unsigned char var_6 = (unsigned char)221;
unsigned long long int var_7 = 17250103870147890047ULL;
unsigned char var_10 = (unsigned char)246;
short var_12 = (short)4882;
unsigned long long int var_14 = 5503697970752452221ULL;
int zero = 0;
short var_15 = (short)-1604;
unsigned long long int var_16 = 2451424814219598054ULL;
signed char var_17 = (signed char)54;
unsigned long long int var_18 = 2396327630919728730ULL;
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
