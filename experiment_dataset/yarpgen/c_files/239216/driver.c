#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4855254182459630548LL;
long long int var_1 = 7849905963906680407LL;
unsigned int var_2 = 1656900993U;
long long int var_5 = 8572805601783089731LL;
short var_8 = (short)-6755;
int zero = 0;
long long int var_10 = -3157120037493819955LL;
unsigned char var_11 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
