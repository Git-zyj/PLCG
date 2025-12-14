#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
unsigned char var_5 = (unsigned char)39;
int var_6 = -1295027629;
short var_7 = (short)15220;
short var_8 = (short)-17689;
unsigned char var_12 = (unsigned char)110;
int var_14 = -1801113860;
int zero = 0;
unsigned long long int var_16 = 9037068539651862512ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)34513;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
