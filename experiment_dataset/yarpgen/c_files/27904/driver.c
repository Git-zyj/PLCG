#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 8219057173549898460LL;
long long int var_4 = -183651855912611696LL;
unsigned int var_5 = 2618409451U;
unsigned char var_6 = (unsigned char)120;
unsigned short var_9 = (unsigned short)25838;
unsigned short var_10 = (unsigned short)26724;
unsigned int var_13 = 3085823209U;
unsigned char var_15 = (unsigned char)96;
unsigned long long int var_16 = 331478915579842367ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)14337;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)17732;
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
