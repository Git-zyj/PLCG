#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8889281312519160103LL;
int var_3 = -1770107939;
unsigned short var_5 = (unsigned short)45524;
unsigned char var_7 = (unsigned char)172;
unsigned long long int var_8 = 7151262183419643177ULL;
int var_12 = -1595115320;
unsigned short var_14 = (unsigned short)51348;
unsigned short var_16 = (unsigned short)23213;
int zero = 0;
signed char var_18 = (signed char)-115;
unsigned char var_19 = (unsigned char)94;
unsigned short var_20 = (unsigned short)37819;
short var_21 = (short)21609;
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
