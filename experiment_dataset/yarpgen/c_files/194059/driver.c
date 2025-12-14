#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7851;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3112419081U;
unsigned char var_3 = (unsigned char)74;
signed char var_4 = (signed char)-104;
unsigned long long int var_5 = 2452268521870925644ULL;
unsigned int var_6 = 2476875741U;
int var_7 = 557926161;
int var_9 = 166739383;
unsigned short var_10 = (unsigned short)17512;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 7147061488495238909ULL;
unsigned long long int var_15 = 5979086166768198518ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)31469;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
