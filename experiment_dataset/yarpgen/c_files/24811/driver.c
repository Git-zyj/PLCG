#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23408;
short var_2 = (short)-14803;
unsigned long long int var_4 = 5331068038619979734ULL;
unsigned long long int var_8 = 1285510207362953620ULL;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)13134;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
