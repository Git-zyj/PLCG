#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32399;
unsigned int var_1 = 876078367U;
signed char var_3 = (signed char)-100;
unsigned char var_10 = (unsigned char)13;
unsigned short var_12 = (unsigned short)13617;
unsigned long long int var_13 = 6648500039348000876ULL;
unsigned long long int var_14 = 15472777921407843920ULL;
int zero = 0;
unsigned long long int var_16 = 13055608367735245423ULL;
short var_17 = (short)-5046;
long long int var_18 = 5374315675076656446LL;
unsigned short var_19 = (unsigned short)34591;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
