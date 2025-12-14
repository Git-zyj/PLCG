#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1980558417U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 17876429479334757428ULL;
unsigned short var_8 = (unsigned short)60325;
unsigned int var_9 = 2094002039U;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1144857601U;
int var_16 = -1244892402;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
