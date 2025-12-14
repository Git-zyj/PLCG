#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -210561683;
unsigned short var_2 = (unsigned short)51581;
unsigned int var_3 = 2562247621U;
signed char var_4 = (signed char)-40;
short var_8 = (short)-19880;
signed char var_12 = (signed char)-97;
short var_14 = (short)17676;
int var_15 = 135307449;
unsigned int var_18 = 626095180U;
int zero = 0;
unsigned int var_19 = 28791753U;
short var_20 = (short)12590;
short var_21 = (short)-6907;
int var_22 = -1532230286;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
