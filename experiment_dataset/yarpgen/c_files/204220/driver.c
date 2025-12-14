#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)138;
short var_5 = (short)28877;
long long int var_8 = -7291217832591137557LL;
unsigned long long int var_9 = 3527453448053133854ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)15471;
int var_14 = -1942896832;
_Bool var_15 = (_Bool)0;
signed char var_17 = (signed char)100;
signed char var_18 = (signed char)59;
int zero = 0;
unsigned short var_20 = (unsigned short)11078;
long long int var_21 = -3244579619367167819LL;
long long int var_22 = 3350078424742007392LL;
int var_23 = -1797249333;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
