#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1425;
unsigned long long int var_4 = 4070549834437285247ULL;
int var_5 = 751311111;
int var_8 = -704066962;
unsigned long long int var_9 = 9740743547132580408ULL;
long long int var_10 = -3888084461416152152LL;
int var_12 = -1852429580;
int zero = 0;
short var_13 = (short)909;
int var_14 = 1906115373;
long long int var_15 = -2292436391833903721LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
