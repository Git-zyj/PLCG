#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23100;
unsigned long long int var_11 = 5735289504660582346ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 14350516409707643246ULL;
unsigned long long int var_15 = 12028226243050930311ULL;
unsigned short var_16 = (unsigned short)13049;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)30134;
void init() {
}

void checksum() {
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
