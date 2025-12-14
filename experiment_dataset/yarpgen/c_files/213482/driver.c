#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10055;
unsigned char var_1 = (unsigned char)119;
unsigned short var_2 = (unsigned short)64566;
long long int var_3 = 6504616310463686360LL;
long long int var_5 = -3104912959954507652LL;
long long int var_7 = 6064327186002506652LL;
unsigned char var_8 = (unsigned char)40;
signed char var_10 = (signed char)-90;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-32150;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-6189;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
