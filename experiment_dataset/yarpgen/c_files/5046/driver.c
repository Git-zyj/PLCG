#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6642665685775670622LL;
short var_4 = (short)18189;
int var_9 = -1812922351;
unsigned long long int var_14 = 2902640696663906101ULL;
unsigned int var_16 = 3364976612U;
int zero = 0;
unsigned short var_17 = (unsigned short)54673;
signed char var_18 = (signed char)-91;
unsigned char var_19 = (unsigned char)228;
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
