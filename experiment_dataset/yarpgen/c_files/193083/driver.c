#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7154390038401597300LL;
unsigned short var_2 = (unsigned short)52776;
unsigned int var_5 = 2394690308U;
short var_7 = (short)-17554;
unsigned long long int var_8 = 12935674605726338984ULL;
unsigned int var_9 = 3569173770U;
unsigned short var_10 = (unsigned short)29532;
unsigned short var_11 = (unsigned short)55693;
unsigned char var_12 = (unsigned char)16;
int zero = 0;
signed char var_14 = (signed char)-30;
signed char var_15 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
