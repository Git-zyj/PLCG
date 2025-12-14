#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
short var_3 = (short)23225;
unsigned short var_7 = (unsigned short)26101;
unsigned short var_10 = (unsigned short)1744;
short var_15 = (short)-27744;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)162;
unsigned char var_19 = (unsigned char)233;
_Bool var_20 = (_Bool)0;
short var_21 = (short)16973;
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
