#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
unsigned char var_1 = (unsigned char)212;
signed char var_3 = (signed char)36;
signed char var_10 = (signed char)-118;
long long int var_11 = -2566966477220797382LL;
int var_15 = -1267853229;
signed char var_16 = (signed char)-44;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-17152;
unsigned int var_21 = 3737144948U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
