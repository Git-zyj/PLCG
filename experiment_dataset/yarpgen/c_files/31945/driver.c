#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10309963583416078752ULL;
long long int var_1 = 745932304021097285LL;
unsigned short var_2 = (unsigned short)44011;
unsigned int var_4 = 1830750138U;
unsigned long long int var_5 = 7379853555242016778ULL;
unsigned short var_10 = (unsigned short)61916;
int zero = 0;
int var_12 = 1055534186;
long long int var_13 = 4291965929098646402LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
