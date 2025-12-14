#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 310863185968927895LL;
unsigned short var_5 = (unsigned short)41928;
unsigned int var_6 = 165884753U;
int var_10 = -1593899278;
unsigned char var_11 = (unsigned char)120;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = -1001380073;
unsigned short var_16 = (unsigned short)40593;
unsigned int var_17 = 745409171U;
unsigned long long int var_18 = 12340679922369530300ULL;
unsigned int var_19 = 3158472395U;
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
