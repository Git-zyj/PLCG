#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26313;
unsigned short var_1 = (unsigned short)47144;
unsigned long long int var_3 = 13599792839328452316ULL;
short var_5 = (short)-29225;
int var_6 = -2076669886;
int var_7 = -1088988919;
unsigned char var_8 = (unsigned char)235;
unsigned short var_9 = (unsigned short)10956;
unsigned short var_10 = (unsigned short)21126;
unsigned char var_12 = (unsigned char)93;
unsigned int var_13 = 3559949134U;
unsigned long long int var_16 = 9301594458417795592ULL;
short var_17 = (short)6930;
unsigned char var_18 = (unsigned char)149;
int zero = 0;
int var_19 = 1570875853;
unsigned short var_20 = (unsigned short)14215;
int var_21 = -1113419383;
short var_22 = (short)-1839;
void init() {
}

void checksum() {
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
