#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3810972861281731222ULL;
short var_4 = (short)7238;
int var_6 = 418733755;
unsigned long long int var_12 = 4230665640004107997ULL;
int zero = 0;
unsigned long long int var_16 = 7467911999806347500ULL;
unsigned long long int var_17 = 15239833123827479341ULL;
int var_18 = -745700706;
void init() {
}

void checksum() {
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
