#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8340731962150908392LL;
long long int var_4 = -1185800172731911840LL;
unsigned char var_6 = (unsigned char)213;
int var_7 = 1396231489;
signed char var_8 = (signed char)26;
int var_11 = -122131439;
unsigned char var_13 = (unsigned char)45;
unsigned int var_14 = 2245199214U;
unsigned int var_15 = 1235400755U;
int zero = 0;
long long int var_18 = -1833137212463317170LL;
signed char var_19 = (signed char)-107;
unsigned char var_20 = (unsigned char)105;
unsigned long long int var_21 = 13808831597453233420ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
