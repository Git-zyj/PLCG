#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2410919151U;
short var_7 = (short)17777;
unsigned short var_10 = (unsigned short)21343;
signed char var_14 = (signed char)-119;
long long int var_15 = -7508091445459889641LL;
long long int var_17 = -8159850576199791168LL;
int zero = 0;
unsigned char var_19 = (unsigned char)104;
signed char var_20 = (signed char)-8;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
