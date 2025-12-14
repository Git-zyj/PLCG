#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 5203037507315363359LL;
unsigned short var_3 = (unsigned short)32330;
unsigned char var_4 = (unsigned char)246;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
unsigned long long int var_18 = 2414290661829726629ULL;
short var_19 = (short)-22099;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-1453;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
