#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)26;
signed char var_2 = (signed char)-69;
unsigned char var_3 = (unsigned char)99;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)56534;
unsigned long long int var_8 = 11898572920893033627ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)9655;
int zero = 0;
unsigned long long int var_15 = 13471775432370117095ULL;
unsigned char var_16 = (unsigned char)191;
unsigned char var_17 = (unsigned char)148;
signed char var_18 = (signed char)53;
unsigned int var_19 = 532003767U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
