#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-115;
int var_5 = 1122715512;
unsigned int var_12 = 3137394830U;
unsigned char var_13 = (unsigned char)134;
int zero = 0;
unsigned char var_16 = (unsigned char)250;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14109429751865977071ULL;
short var_19 = (short)-10375;
signed char var_20 = (signed char)-66;
short var_21 = (short)-23347;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
