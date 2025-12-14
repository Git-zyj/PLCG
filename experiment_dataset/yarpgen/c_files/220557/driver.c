#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 2712604794737511054ULL;
unsigned char var_3 = (unsigned char)244;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)24140;
unsigned short var_6 = (unsigned short)36619;
long long int var_7 = -8681041855946229355LL;
int var_8 = 1207442240;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 4492091633954380119LL;
unsigned char var_12 = (unsigned char)98;
unsigned long long int var_13 = 16643275472650939232ULL;
long long int var_14 = 739294213584143197LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
