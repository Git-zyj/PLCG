#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17451;
long long int var_2 = 7662323583291833153LL;
unsigned char var_3 = (unsigned char)252;
signed char var_4 = (signed char)70;
long long int var_5 = 1563749308681599696LL;
short var_6 = (short)16212;
short var_7 = (short)-10354;
short var_8 = (short)-12713;
short var_10 = (short)3147;
int zero = 0;
int var_15 = -72437743;
long long int var_16 = -196559994310432525LL;
long long int var_17 = -2363592261408080963LL;
int var_18 = 2072101780;
long long int var_19 = -8148445340204890138LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
