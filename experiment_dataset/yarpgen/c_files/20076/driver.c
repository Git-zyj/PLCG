#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)78;
unsigned int var_6 = 3170113691U;
signed char var_7 = (signed char)106;
signed char var_10 = (signed char)-90;
long long int var_12 = -621919338739910227LL;
unsigned char var_14 = (unsigned char)190;
unsigned short var_15 = (unsigned short)22502;
short var_17 = (short)21549;
short var_18 = (short)6364;
int zero = 0;
unsigned short var_20 = (unsigned short)23535;
unsigned char var_21 = (unsigned char)146;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-1282;
short var_24 = (short)-9372;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
