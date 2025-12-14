#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1419626343;
signed char var_2 = (signed char)37;
_Bool var_3 = (_Bool)1;
short var_7 = (short)-11038;
int var_9 = 713626748;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)182;
signed char var_16 = (signed char)91;
short var_17 = (short)-2423;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2390168014U;
int zero = 0;
unsigned short var_20 = (unsigned short)31674;
unsigned char var_21 = (unsigned char)170;
signed char var_22 = (signed char)81;
unsigned short var_23 = (unsigned short)1928;
long long int var_24 = -7448423950365425362LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
