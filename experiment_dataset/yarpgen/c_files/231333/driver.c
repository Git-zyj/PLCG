#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)17157;
unsigned char var_4 = (unsigned char)59;
unsigned short var_5 = (unsigned short)45945;
signed char var_7 = (signed char)110;
long long int var_8 = -3077109052575475607LL;
signed char var_10 = (signed char)-111;
unsigned short var_11 = (unsigned short)15258;
unsigned short var_13 = (unsigned short)56403;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
unsigned char var_18 = (unsigned char)236;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
int var_21 = -1521063261;
void init() {
}

void checksum() {
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
