#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1986058651;
unsigned int var_1 = 3449354751U;
unsigned int var_4 = 2202546653U;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 1122515521U;
unsigned short var_12 = (unsigned short)32122;
unsigned int var_13 = 997891326U;
unsigned short var_17 = (unsigned short)25461;
int zero = 0;
unsigned long long int var_18 = 15995260102697801922ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7094386362340707068LL;
void init() {
}

void checksum() {
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
