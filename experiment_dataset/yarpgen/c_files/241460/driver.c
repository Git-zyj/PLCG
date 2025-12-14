#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)120;
short var_9 = (short)-14596;
_Bool var_12 = (_Bool)0;
unsigned char var_15 = (unsigned char)130;
unsigned short var_16 = (unsigned short)20549;
long long int var_17 = 5484338357012173964LL;
int zero = 0;
unsigned short var_19 = (unsigned short)26715;
short var_20 = (short)29400;
unsigned long long int var_21 = 16407103581278199728ULL;
short var_22 = (short)17248;
void init() {
}

void checksum() {
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
