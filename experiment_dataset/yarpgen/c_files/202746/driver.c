#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 624291925;
unsigned long long int var_1 = 6113748291589392371ULL;
short var_2 = (short)-13446;
int var_5 = 645272566;
signed char var_6 = (signed char)75;
int var_7 = 173055261;
short var_8 = (short)19642;
int var_9 = -566630664;
int var_10 = -1773996273;
int zero = 0;
int var_11 = -591026762;
unsigned long long int var_12 = 7956305983970743154ULL;
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
