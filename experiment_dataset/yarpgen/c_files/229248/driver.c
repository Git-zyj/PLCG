#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8075617564351425411LL;
int var_2 = 341980379;
unsigned long long int var_3 = 1197614951322840627ULL;
signed char var_5 = (signed char)-56;
long long int var_6 = 7694721918161436991LL;
long long int var_10 = -3366885984418724174LL;
int zero = 0;
signed char var_11 = (signed char)14;
short var_12 = (short)-2752;
signed char var_13 = (signed char)-31;
signed char var_14 = (signed char)8;
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
