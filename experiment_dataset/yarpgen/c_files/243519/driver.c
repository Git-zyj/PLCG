#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18418;
signed char var_1 = (signed char)-75;
unsigned short var_2 = (unsigned short)49480;
unsigned short var_3 = (unsigned short)33360;
signed char var_5 = (signed char)-2;
long long int var_6 = 1376768881045025294LL;
_Bool var_7 = (_Bool)0;
unsigned char var_13 = (unsigned char)234;
unsigned long long int var_14 = 4887306464324630239ULL;
int zero = 0;
long long int var_15 = -816834125120284328LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-107;
short var_18 = (short)25030;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
