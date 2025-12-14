#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38658;
int var_2 = 1763461489;
int var_4 = 2098567101;
short var_5 = (short)32671;
unsigned char var_6 = (unsigned char)214;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)43110;
signed char var_10 = (signed char)-14;
_Bool var_11 = (_Bool)0;
int var_15 = -2020697451;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -474188304;
unsigned char var_19 = (unsigned char)112;
unsigned char var_20 = (unsigned char)24;
unsigned short var_21 = (unsigned short)19350;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
