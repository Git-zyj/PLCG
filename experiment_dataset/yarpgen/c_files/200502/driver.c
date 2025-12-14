#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5215308072147338405LL;
unsigned char var_2 = (unsigned char)112;
int var_4 = 1787147368;
long long int var_7 = 3663859784979084092LL;
int var_8 = 2085633170;
unsigned char var_11 = (unsigned char)220;
int var_15 = 1602290603;
unsigned char var_17 = (unsigned char)186;
unsigned long long int var_18 = 10319292405320237590ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)40;
int var_20 = -1805358111;
long long int var_21 = -7132066736207273234LL;
signed char var_22 = (signed char)96;
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
