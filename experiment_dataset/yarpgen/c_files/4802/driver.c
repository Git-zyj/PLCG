#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3696034048U;
unsigned int var_3 = 3446570450U;
unsigned int var_5 = 1572743141U;
int var_7 = 215379739;
unsigned char var_8 = (unsigned char)195;
long long int var_10 = 7125618771144160184LL;
long long int var_12 = 802965109835841180LL;
int zero = 0;
int var_13 = -2146478711;
int var_14 = -1172271743;
long long int var_15 = -4295040117577356615LL;
unsigned short var_16 = (unsigned short)4622;
long long int var_17 = -2811198791263873398LL;
unsigned long long int var_18 = 17065801368612196135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
