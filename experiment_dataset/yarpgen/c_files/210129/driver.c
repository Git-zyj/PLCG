#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18315;
_Bool var_1 = (_Bool)1;
short var_2 = (short)32647;
long long int var_3 = 4463665539704758389LL;
unsigned char var_5 = (unsigned char)72;
unsigned int var_7 = 2350612566U;
long long int var_8 = 5052409908302751629LL;
int zero = 0;
unsigned char var_11 = (unsigned char)185;
unsigned long long int var_12 = 158062390234962429ULL;
unsigned long long int var_13 = 15222549724958272043ULL;
int var_14 = 1151553541;
void init() {
}

void checksum() {
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
