#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned short var_3 = (unsigned short)62224;
int var_4 = -1466282719;
long long int var_9 = 2133878169448614457LL;
unsigned int var_12 = 2048627008U;
unsigned short var_13 = (unsigned short)29023;
int zero = 0;
short var_15 = (short)-11225;
unsigned short var_16 = (unsigned short)40006;
unsigned short var_17 = (unsigned short)62724;
short var_18 = (short)-1669;
int var_19 = -1999241211;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
