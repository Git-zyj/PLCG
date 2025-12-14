#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29549;
unsigned int var_3 = 3548917937U;
int var_6 = 1163544536;
long long int var_7 = -6277769759322907111LL;
unsigned char var_8 = (unsigned char)212;
long long int var_9 = 3352260444206557255LL;
short var_10 = (short)28234;
short var_11 = (short)32069;
unsigned char var_12 = (unsigned char)204;
int var_13 = 1748796473;
unsigned long long int var_14 = 1061276717583450452ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)228;
signed char var_16 = (signed char)98;
int var_17 = 494558377;
unsigned short var_18 = (unsigned short)60688;
signed char var_19 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
