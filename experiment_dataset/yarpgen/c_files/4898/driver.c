#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
long long int var_1 = -1033077268414895293LL;
short var_4 = (short)24972;
unsigned long long int var_5 = 12586753801233884936ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)146;
unsigned short var_19 = (unsigned short)53145;
signed char var_20 = (signed char)-110;
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
