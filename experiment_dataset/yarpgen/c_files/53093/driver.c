#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31877;
signed char var_1 = (signed char)-88;
signed char var_3 = (signed char)-12;
short var_4 = (short)-23106;
unsigned short var_5 = (unsigned short)61911;
unsigned short var_7 = (unsigned short)16740;
short var_9 = (short)-13540;
unsigned short var_10 = (unsigned short)40949;
unsigned short var_11 = (unsigned short)8916;
int zero = 0;
int var_17 = -633648606;
unsigned short var_18 = (unsigned short)55843;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
