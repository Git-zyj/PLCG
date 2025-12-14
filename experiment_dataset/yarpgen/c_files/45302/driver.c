#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)52;
unsigned char var_2 = (unsigned char)86;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)6855;
unsigned long long int var_6 = 12448632909927132600ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)56;
signed char var_12 = (signed char)-123;
unsigned char var_13 = (unsigned char)30;
short var_16 = (short)10320;
long long int var_18 = 6710899066858746861LL;
int zero = 0;
short var_19 = (short)-2335;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)57174;
void init() {
}

void checksum() {
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
