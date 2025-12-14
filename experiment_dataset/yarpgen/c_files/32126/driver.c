#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1977890714;
short var_2 = (short)9960;
int var_3 = 1135633647;
int var_4 = -188519874;
short var_5 = (short)24276;
unsigned short var_8 = (unsigned short)4432;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 4721001252881152256ULL;
short var_12 = (short)-17155;
int zero = 0;
unsigned short var_14 = (unsigned short)39086;
unsigned long long int var_15 = 4444744473808557081ULL;
unsigned long long int var_16 = 2877182364929512495ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
