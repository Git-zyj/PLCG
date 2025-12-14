#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6039338894925032954ULL;
unsigned short var_2 = (unsigned short)60194;
unsigned int var_4 = 2203344350U;
short var_5 = (short)-1483;
unsigned char var_7 = (unsigned char)104;
short var_8 = (short)-2011;
short var_9 = (short)15146;
unsigned short var_11 = (unsigned short)64395;
int zero = 0;
unsigned short var_13 = (unsigned short)62019;
unsigned int var_14 = 1949781101U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
