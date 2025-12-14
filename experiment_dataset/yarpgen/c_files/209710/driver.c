#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16663795417753116809ULL;
unsigned short var_11 = (unsigned short)42895;
signed char var_12 = (signed char)85;
unsigned char var_14 = (unsigned char)125;
short var_16 = (short)-13918;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1029372961U;
int var_20 = -1255310180;
unsigned int var_21 = 2214243804U;
int var_22 = 1155843728;
unsigned short var_23 = (unsigned short)6760;
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
