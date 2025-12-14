#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
signed char var_2 = (signed char)-80;
int var_10 = 1951517773;
int var_12 = -1433357391;
long long int var_14 = -4091882922446570790LL;
unsigned short var_15 = (unsigned short)64643;
unsigned long long int var_16 = 16702074756218030161ULL;
unsigned char var_17 = (unsigned char)71;
int zero = 0;
int var_19 = -1431216185;
unsigned short var_20 = (unsigned short)24601;
void init() {
}

void checksum() {
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
