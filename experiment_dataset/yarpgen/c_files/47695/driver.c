#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3872965319U;
unsigned int var_4 = 734427885U;
unsigned short var_5 = (unsigned short)11890;
short var_6 = (short)29381;
unsigned char var_7 = (unsigned char)159;
short var_10 = (short)-8066;
unsigned long long int var_12 = 1126353664139552401ULL;
int zero = 0;
unsigned int var_13 = 704520443U;
short var_14 = (short)13628;
short var_15 = (short)28604;
unsigned short var_16 = (unsigned short)58144;
unsigned int var_17 = 342200433U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
