#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
int var_1 = -1337738210;
short var_2 = (short)-21802;
unsigned int var_3 = 1816329685U;
short var_5 = (short)-2769;
unsigned short var_6 = (unsigned short)26374;
short var_7 = (short)-18600;
int var_8 = 1484420761;
short var_9 = (short)-14459;
int zero = 0;
unsigned short var_10 = (unsigned short)26352;
unsigned char var_11 = (unsigned char)176;
unsigned short var_12 = (unsigned short)34796;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
