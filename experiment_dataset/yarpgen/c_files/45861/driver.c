#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)182;
signed char var_3 = (signed char)16;
unsigned short var_4 = (unsigned short)45210;
unsigned int var_7 = 3669935688U;
int var_8 = 1421685510;
unsigned short var_9 = (unsigned short)61229;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 17633071818716915526ULL;
unsigned short var_17 = (unsigned short)6680;
int zero = 0;
long long int var_18 = -8065966198081518740LL;
int var_19 = 1731615599;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
