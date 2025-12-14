#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12024354879961916683ULL;
unsigned long long int var_4 = 17387283946602370363ULL;
unsigned short var_5 = (unsigned short)44501;
short var_13 = (short)16018;
unsigned char var_15 = (unsigned char)44;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)4054;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16438606044141875320ULL;
void init() {
}

void checksum() {
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
