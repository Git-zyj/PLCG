#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5561;
long long int var_3 = 6718536937023658071LL;
short var_4 = (short)-20318;
unsigned short var_5 = (unsigned short)59754;
unsigned long long int var_7 = 5656742590295333741ULL;
short var_10 = (short)3855;
signed char var_11 = (signed char)110;
unsigned short var_13 = (unsigned short)22197;
signed char var_14 = (signed char)-33;
unsigned char var_18 = (unsigned char)166;
int zero = 0;
unsigned short var_19 = (unsigned short)6977;
signed char var_20 = (signed char)-1;
unsigned short var_21 = (unsigned short)60180;
unsigned int var_22 = 4293653657U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
