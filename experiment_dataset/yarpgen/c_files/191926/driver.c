#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2823012367U;
unsigned char var_3 = (unsigned char)189;
unsigned short var_5 = (unsigned short)25934;
unsigned long long int var_7 = 12288031719613640867ULL;
unsigned int var_8 = 1685987640U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2382996999U;
unsigned int var_13 = 332268008U;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)-9;
int zero = 0;
unsigned int var_17 = 3193589589U;
int var_18 = -943461417;
long long int var_19 = 2892755803121822907LL;
signed char var_20 = (signed char)-77;
signed char var_21 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
