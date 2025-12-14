#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17893;
unsigned int var_2 = 3575890680U;
unsigned short var_3 = (unsigned short)53659;
long long int var_4 = 648420994712075099LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 7078606923138829388LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 3013830223U;
int var_9 = 247193374;
signed char var_10 = (signed char)8;
unsigned char var_12 = (unsigned char)179;
short var_13 = (short)23538;
unsigned long long int var_14 = 2451974192245737473ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 524787552;
short var_18 = (short)-19621;
unsigned char var_19 = (unsigned char)31;
_Bool var_20 = (_Bool)1;
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
