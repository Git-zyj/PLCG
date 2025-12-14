#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18081040501093893410ULL;
short var_4 = (short)-18642;
signed char var_5 = (signed char)4;
long long int var_11 = 8352308686166801032LL;
unsigned long long int var_14 = 16984708700490488940ULL;
unsigned int var_15 = 1226375134U;
signed char var_18 = (signed char)-112;
int zero = 0;
signed char var_19 = (signed char)-119;
long long int var_20 = -2971171864673617290LL;
unsigned long long int var_21 = 2874253266467412811ULL;
unsigned long long int var_22 = 13767231235682460583ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
