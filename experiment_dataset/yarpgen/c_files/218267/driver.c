#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15130;
int var_1 = -755494658;
signed char var_3 = (signed char)127;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)8017;
signed char var_9 = (signed char)122;
unsigned short var_11 = (unsigned short)5217;
long long int var_15 = -4934923261969118209LL;
int zero = 0;
short var_16 = (short)13423;
int var_17 = -2010740464;
unsigned short var_18 = (unsigned short)5430;
void init() {
}

void checksum() {
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
