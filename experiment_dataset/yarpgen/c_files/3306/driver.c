#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 990057883U;
unsigned char var_4 = (unsigned char)126;
unsigned char var_5 = (unsigned char)222;
short var_6 = (short)-16682;
long long int var_7 = -7864958112214709488LL;
unsigned long long int var_8 = 211015830878729768ULL;
long long int var_10 = 5590393626094808908LL;
unsigned short var_12 = (unsigned short)42590;
unsigned int var_14 = 593185544U;
_Bool var_15 = (_Bool)0;
short var_17 = (short)-15888;
int zero = 0;
long long int var_18 = 3504614831071600602LL;
unsigned char var_19 = (unsigned char)33;
unsigned char var_20 = (unsigned char)91;
short var_21 = (short)-21952;
unsigned char var_22 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
