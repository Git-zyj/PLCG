#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52553;
unsigned short var_2 = (unsigned short)34434;
unsigned short var_5 = (unsigned short)1215;
unsigned short var_6 = (unsigned short)39966;
unsigned short var_7 = (unsigned short)57209;
unsigned char var_10 = (unsigned char)237;
unsigned char var_11 = (unsigned char)11;
long long int var_13 = -3278152176563938939LL;
int zero = 0;
short var_16 = (short)21494;
long long int var_17 = 9167101874620126223LL;
unsigned int var_18 = 1586765726U;
unsigned char var_19 = (unsigned char)223;
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
