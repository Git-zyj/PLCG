#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32031;
int var_14 = 1185684290;
unsigned long long int var_15 = 13105074786613760483ULL;
unsigned long long int var_17 = 12492228650576751417ULL;
int var_18 = 1486696291;
int zero = 0;
long long int var_19 = 731100476202429485LL;
short var_20 = (short)-9750;
int var_21 = 1848172516;
void init() {
}

void checksum() {
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
