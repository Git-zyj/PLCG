#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-23229;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)186;
long long int var_11 = 5896931864537146363LL;
signed char var_13 = (signed char)-17;
int zero = 0;
short var_15 = (short)25844;
unsigned int var_16 = 3505580252U;
unsigned int var_17 = 906524727U;
unsigned short var_18 = (unsigned short)36053;
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
