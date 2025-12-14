#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28926;
unsigned short var_4 = (unsigned short)8273;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)364;
short var_11 = (short)-4144;
short var_13 = (short)-21415;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)6231;
unsigned long long int var_17 = 4379552760255530636ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
