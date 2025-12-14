#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
int var_1 = 911754354;
signed char var_3 = (signed char)-52;
short var_4 = (short)15450;
int var_6 = -2015887912;
short var_7 = (short)2625;
unsigned char var_8 = (unsigned char)77;
unsigned int var_9 = 1685338048U;
unsigned int var_11 = 3363134085U;
unsigned long long int var_13 = 4037594349834791904ULL;
unsigned int var_15 = 1725642580U;
short var_16 = (short)19323;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8327950664585388527LL;
short var_19 = (short)19526;
long long int var_20 = 1833432970334199580LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
