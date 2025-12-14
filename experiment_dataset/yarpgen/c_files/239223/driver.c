#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1963272631U;
short var_5 = (short)3383;
unsigned long long int var_6 = 8313810033635042330ULL;
long long int var_7 = 2016223603601788215LL;
unsigned int var_8 = 571356815U;
int zero = 0;
unsigned long long int var_10 = 16330915702947900754ULL;
unsigned char var_11 = (unsigned char)132;
short var_12 = (short)-8525;
unsigned char var_13 = (unsigned char)217;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
