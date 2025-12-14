#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2903086083U;
unsigned int var_1 = 4424060U;
unsigned char var_4 = (unsigned char)140;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 14937638723380434840ULL;
int var_17 = 567366603;
signed char var_18 = (signed char)-42;
int zero = 0;
short var_19 = (short)-20495;
unsigned int var_20 = 473651876U;
unsigned short var_21 = (unsigned short)19729;
long long int var_22 = 7983094604359985450LL;
int var_23 = 2064951678;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
