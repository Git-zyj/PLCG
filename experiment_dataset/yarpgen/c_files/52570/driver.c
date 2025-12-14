#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 2728088099235515126LL;
long long int var_3 = 4320099188613352771LL;
int var_4 = -2135444174;
int var_6 = 1031975459;
int var_7 = -525821516;
long long int var_11 = -8840901368695128140LL;
unsigned short var_13 = (unsigned short)2036;
unsigned char var_14 = (unsigned char)197;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 7041985369826815649ULL;
int var_18 = 1958533174;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1388655313U;
unsigned char var_21 = (unsigned char)46;
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
