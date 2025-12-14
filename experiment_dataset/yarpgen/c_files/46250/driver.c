#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15201382870993736588ULL;
int var_2 = 69690127;
_Bool var_3 = (_Bool)1;
int var_6 = -87948566;
short var_7 = (short)25326;
long long int var_9 = -2767596756858629735LL;
unsigned short var_10 = (unsigned short)40484;
unsigned char var_11 = (unsigned char)152;
int zero = 0;
unsigned int var_12 = 406001399U;
short var_13 = (short)-2959;
unsigned char var_14 = (unsigned char)251;
void init() {
}

void checksum() {
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
