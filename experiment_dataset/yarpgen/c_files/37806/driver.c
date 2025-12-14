#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned char var_2 = (unsigned char)138;
unsigned int var_3 = 225919729U;
int var_4 = -536547949;
signed char var_5 = (signed char)-86;
int var_6 = -121855654;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)-28;
int zero = 0;
unsigned int var_13 = 3643238422U;
unsigned long long int var_14 = 2277851439015334037ULL;
signed char var_15 = (signed char)96;
short var_16 = (short)-25895;
int var_17 = 367181452;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
