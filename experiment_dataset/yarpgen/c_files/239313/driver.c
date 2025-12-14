#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1676782441;
short var_7 = (short)3960;
unsigned short var_12 = (unsigned short)19229;
int var_13 = 1234710493;
short var_15 = (short)2843;
int zero = 0;
unsigned long long int var_17 = 2876302855409794966ULL;
short var_18 = (short)-6275;
signed char var_19 = (signed char)-126;
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
