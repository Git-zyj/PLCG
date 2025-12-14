#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)99;
signed char var_1 = (signed char)18;
long long int var_5 = 2364245159923646787LL;
unsigned short var_8 = (unsigned short)37220;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 4234933424U;
long long int var_11 = -6018225517247521811LL;
unsigned short var_12 = (unsigned short)36991;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)216;
int zero = 0;
unsigned char var_17 = (unsigned char)57;
unsigned long long int var_18 = 17152982187043907984ULL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)16978;
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
