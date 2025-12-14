#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14499;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 17428893459583012901ULL;
unsigned char var_11 = (unsigned char)207;
unsigned int var_12 = 1390970002U;
short var_13 = (short)9208;
unsigned short var_14 = (unsigned short)7142;
int zero = 0;
int var_15 = 1522217722;
long long int var_16 = -1017057865874161119LL;
unsigned char var_17 = (unsigned char)3;
signed char var_18 = (signed char)-16;
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
