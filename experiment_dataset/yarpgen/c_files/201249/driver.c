#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -877076771;
unsigned short var_2 = (unsigned short)54372;
unsigned char var_4 = (unsigned char)97;
_Bool var_5 = (_Bool)0;
unsigned int var_9 = 3272279640U;
short var_10 = (short)-178;
unsigned long long int var_16 = 14095651013739735452ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)12786;
short var_18 = (short)-22506;
signed char var_19 = (signed char)-48;
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
