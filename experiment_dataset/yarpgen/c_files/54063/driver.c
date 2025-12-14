#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned short var_3 = (unsigned short)38624;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 959855046U;
int var_9 = 120155800;
signed char var_10 = (signed char)86;
unsigned int var_11 = 411122484U;
unsigned long long int var_15 = 13275901147229610437ULL;
int zero = 0;
signed char var_16 = (signed char)-8;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7360300545094952453LL;
unsigned long long int var_19 = 9143113166512237167ULL;
void init() {
}

void checksum() {
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
