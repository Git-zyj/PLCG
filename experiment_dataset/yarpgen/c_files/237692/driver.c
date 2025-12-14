#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 4090123541U;
_Bool var_2 = (_Bool)1;
short var_3 = (short)6532;
unsigned char var_4 = (unsigned char)239;
int var_5 = 1011072151;
unsigned short var_6 = (unsigned short)18462;
unsigned char var_7 = (unsigned char)26;
signed char var_8 = (signed char)7;
unsigned short var_9 = (unsigned short)56733;
int zero = 0;
signed char var_10 = (signed char)-51;
unsigned long long int var_11 = 408490915408387045ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2149324920306702467LL;
unsigned char var_14 = (unsigned char)184;
long long int var_15 = 7874002141546985765LL;
unsigned short var_16 = (unsigned short)58385;
signed char var_17 = (signed char)-115;
unsigned int var_18 = 363238110U;
int var_19 = -1604815334;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
