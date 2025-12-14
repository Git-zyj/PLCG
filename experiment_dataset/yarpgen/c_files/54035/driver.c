#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned short var_1 = (unsigned short)17299;
unsigned long long int var_2 = 1818692765450995708ULL;
unsigned int var_3 = 1029783580U;
short var_4 = (short)9653;
unsigned char var_5 = (unsigned char)63;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-18184;
unsigned short var_8 = (unsigned short)39063;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)34898;
unsigned short var_16 = (unsigned short)54495;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17425361638224953058ULL;
unsigned char var_19 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
