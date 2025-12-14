#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12573;
short var_1 = (short)-24322;
int var_2 = -1822838015;
long long int var_4 = 6681445484360650270LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-29999;
unsigned char var_7 = (unsigned char)48;
short var_8 = (short)16377;
short var_9 = (short)-17492;
short var_10 = (short)13427;
int zero = 0;
int var_11 = 586550867;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
