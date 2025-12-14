#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62981;
signed char var_2 = (signed char)82;
signed char var_3 = (signed char)1;
long long int var_5 = -4328433036778171802LL;
unsigned long long int var_6 = 2034055075376124127ULL;
unsigned int var_7 = 3403939682U;
short var_13 = (short)2123;
long long int var_14 = 3241567358448397168LL;
unsigned long long int var_15 = 7313001708558327211ULL;
unsigned long long int var_16 = 2862565463459368843ULL;
int zero = 0;
short var_17 = (short)-31565;
short var_18 = (short)19002;
signed char var_19 = (signed char)-42;
unsigned long long int var_20 = 13521514900068285608ULL;
unsigned char var_21 = (unsigned char)181;
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
