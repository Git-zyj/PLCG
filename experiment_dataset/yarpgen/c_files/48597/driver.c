#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
long long int var_2 = 4704924453877561875LL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)100;
signed char var_9 = (signed char)94;
unsigned short var_10 = (unsigned short)39093;
signed char var_14 = (signed char)-42;
short var_15 = (short)-29506;
int zero = 0;
signed char var_17 = (signed char)-66;
long long int var_18 = -4362957058165615898LL;
unsigned short var_19 = (unsigned short)40631;
unsigned short var_20 = (unsigned short)48084;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
