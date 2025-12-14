#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7448939503878246190LL;
unsigned long long int var_2 = 13497370760384213170ULL;
int var_3 = -734122795;
unsigned short var_10 = (unsigned short)12183;
long long int var_11 = -6058879566467869404LL;
unsigned char var_13 = (unsigned char)111;
signed char var_16 = (signed char)52;
int zero = 0;
unsigned short var_17 = (unsigned short)11018;
unsigned int var_18 = 1674785338U;
signed char var_19 = (signed char)-35;
unsigned short var_20 = (unsigned short)57986;
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
