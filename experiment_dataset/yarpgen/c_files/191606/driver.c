#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 815828320U;
unsigned long long int var_4 = 14980306031349874344ULL;
unsigned char var_5 = (unsigned char)115;
unsigned long long int var_9 = 16252803106000511429ULL;
unsigned short var_12 = (unsigned short)55324;
unsigned long long int var_14 = 12933519161372734068ULL;
unsigned int var_16 = 2370246869U;
unsigned int var_17 = 1097163541U;
int zero = 0;
unsigned long long int var_19 = 14801167248652860863ULL;
int var_20 = -1951118354;
short var_21 = (short)-17999;
unsigned short var_22 = (unsigned short)36199;
long long int var_23 = 8569444236271350437LL;
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
