#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45918;
unsigned short var_2 = (unsigned short)21883;
unsigned int var_3 = 288174575U;
unsigned short var_4 = (unsigned short)4996;
unsigned short var_5 = (unsigned short)34335;
unsigned char var_6 = (unsigned char)112;
unsigned int var_9 = 3385657407U;
long long int var_10 = 4024428922973996121LL;
unsigned int var_14 = 2451234311U;
unsigned int var_16 = 1839384382U;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
unsigned int var_18 = 103443037U;
unsigned char var_19 = (unsigned char)235;
unsigned int var_20 = 3666394898U;
int var_21 = -728385906;
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
