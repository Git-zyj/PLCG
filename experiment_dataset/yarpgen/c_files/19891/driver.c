#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
signed char var_7 = (signed char)102;
short var_8 = (short)-6323;
int var_13 = 414556605;
int var_14 = -1325929063;
signed char var_17 = (signed char)48;
signed char var_18 = (signed char)-68;
int zero = 0;
signed char var_19 = (signed char)-46;
unsigned char var_20 = (unsigned char)106;
unsigned short var_21 = (unsigned short)5973;
unsigned char var_22 = (unsigned char)227;
long long int var_23 = 6166243073556313137LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
