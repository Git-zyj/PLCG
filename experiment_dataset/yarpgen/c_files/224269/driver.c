#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6860;
signed char var_6 = (signed char)75;
signed char var_10 = (signed char)-92;
signed char var_15 = (signed char)14;
unsigned short var_16 = (unsigned short)37717;
int zero = 0;
int var_17 = -393330668;
unsigned char var_18 = (unsigned char)143;
int var_19 = 683528321;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
