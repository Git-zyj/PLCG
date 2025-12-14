#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1265883731U;
unsigned long long int var_2 = 14470297624239770167ULL;
unsigned char var_7 = (unsigned char)177;
unsigned short var_8 = (unsigned short)23838;
unsigned long long int var_11 = 10076808979137933850ULL;
unsigned char var_13 = (unsigned char)140;
unsigned char var_14 = (unsigned char)94;
long long int var_15 = 5682779331794275297LL;
unsigned long long int var_16 = 8001625714081624263ULL;
int zero = 0;
unsigned int var_17 = 3812442996U;
unsigned int var_18 = 2114347662U;
_Bool var_19 = (_Bool)0;
long long int var_20 = -3896086516069141171LL;
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
