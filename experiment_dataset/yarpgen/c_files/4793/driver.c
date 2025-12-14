#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29596;
long long int var_1 = -6347583573374796286LL;
signed char var_2 = (signed char)25;
signed char var_4 = (signed char)1;
unsigned int var_5 = 1384220823U;
unsigned char var_6 = (unsigned char)117;
unsigned short var_8 = (unsigned short)10312;
unsigned char var_10 = (unsigned char)96;
long long int var_11 = -929621671088947072LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2102707255U;
int zero = 0;
long long int var_14 = -288441037814738561LL;
short var_15 = (short)-25834;
unsigned char var_16 = (unsigned char)235;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
