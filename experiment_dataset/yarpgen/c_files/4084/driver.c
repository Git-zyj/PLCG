#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
short var_1 = (short)-30861;
unsigned long long int var_2 = 8323737325543548149ULL;
long long int var_3 = 6417201022831491771LL;
unsigned int var_4 = 3257765758U;
unsigned long long int var_5 = 11328438123815817423ULL;
unsigned long long int var_6 = 9136307572925321373ULL;
long long int var_7 = 6510201049897707050LL;
short var_8 = (short)-32766;
signed char var_10 = (signed char)127;
int zero = 0;
unsigned long long int var_11 = 11731833152110775724ULL;
signed char var_12 = (signed char)-17;
unsigned int var_13 = 4102307564U;
unsigned long long int var_14 = 14240310327277474174ULL;
unsigned long long int var_15 = 12801049604392115166ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
