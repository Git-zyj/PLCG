#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26281;
signed char var_3 = (signed char)-84;
unsigned short var_4 = (unsigned short)15936;
unsigned short var_5 = (unsigned short)41197;
unsigned short var_7 = (unsigned short)19149;
unsigned int var_8 = 951328160U;
short var_9 = (short)808;
unsigned char var_11 = (unsigned char)137;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_17 = (short)18550;
short var_18 = (short)-7678;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = -478440219;
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
