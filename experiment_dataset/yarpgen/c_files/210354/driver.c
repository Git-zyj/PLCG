#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 400529728U;
unsigned short var_2 = (unsigned short)63665;
unsigned short var_3 = (unsigned short)42329;
short var_5 = (short)30964;
unsigned short var_6 = (unsigned short)4092;
long long int var_7 = 8247958498176164542LL;
unsigned short var_10 = (unsigned short)26321;
signed char var_11 = (signed char)91;
unsigned char var_12 = (unsigned char)105;
signed char var_13 = (signed char)65;
unsigned long long int var_14 = 4816946855566856698ULL;
unsigned char var_15 = (unsigned char)148;
int zero = 0;
short var_17 = (short)27725;
short var_18 = (short)-23974;
unsigned long long int var_19 = 3221768945396847240ULL;
unsigned short var_20 = (unsigned short)26866;
unsigned long long int var_21 = 11250074249221350031ULL;
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
