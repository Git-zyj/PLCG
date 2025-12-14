#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6396750811984996780LL;
long long int var_2 = 7277792621606819632LL;
long long int var_4 = -1800191032078062190LL;
long long int var_7 = 7615955814567825473LL;
unsigned char var_9 = (unsigned char)71;
signed char var_14 = (signed char)-118;
int zero = 0;
long long int var_16 = 1109146532456016533LL;
short var_17 = (short)25590;
int var_18 = 421395617;
unsigned long long int var_19 = 12311491824273613433ULL;
long long int var_20 = 5998306879241055424LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
