#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18225761077924537857ULL;
unsigned short var_1 = (unsigned short)27711;
unsigned long long int var_2 = 1586065131388581607ULL;
unsigned long long int var_3 = 18008580785556073582ULL;
short var_5 = (short)15688;
unsigned long long int var_8 = 4928327915751480564ULL;
unsigned long long int var_11 = 2404037240929109815ULL;
short var_12 = (short)32559;
short var_14 = (short)-24352;
int var_15 = -1703590073;
int zero = 0;
short var_17 = (short)-14777;
unsigned char var_18 = (unsigned char)31;
unsigned long long int var_19 = 17788869613891096645ULL;
void init() {
}

void checksum() {
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
