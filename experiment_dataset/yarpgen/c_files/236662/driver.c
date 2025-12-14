#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)54687;
short var_6 = (short)760;
long long int var_7 = -4681730157208760669LL;
unsigned int var_14 = 161839930U;
short var_16 = (short)-25866;
short var_17 = (short)13875;
unsigned char var_18 = (unsigned char)251;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
short var_20 = (short)1519;
short var_21 = (short)7882;
int var_22 = 1286773288;
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
