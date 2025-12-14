#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5158458281336117563LL;
signed char var_2 = (signed char)-62;
unsigned long long int var_4 = 11306313997687255066ULL;
_Bool var_5 = (_Bool)1;
int var_6 = 1991475763;
unsigned short var_8 = (unsigned short)32173;
unsigned char var_10 = (unsigned char)90;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)-21801;
unsigned short var_15 = (unsigned short)65358;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
