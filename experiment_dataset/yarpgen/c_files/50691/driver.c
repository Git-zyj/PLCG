#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-115;
unsigned char var_8 = (unsigned char)211;
unsigned char var_11 = (unsigned char)243;
unsigned long long int var_14 = 11592907166947563717ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1257008738U;
unsigned short var_17 = (unsigned short)40950;
short var_18 = (short)-17776;
void init() {
}

void checksum() {
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
