#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
long long int var_2 = 6265235808473263017LL;
short var_3 = (short)-22700;
unsigned char var_5 = (unsigned char)56;
unsigned short var_6 = (unsigned short)29186;
unsigned short var_7 = (unsigned short)59826;
int var_10 = 772116428;
int var_11 = 2096457148;
long long int var_12 = 7582145724662372665LL;
int zero = 0;
long long int var_13 = -8915381080671367772LL;
short var_14 = (short)8012;
unsigned short var_15 = (unsigned short)38480;
int var_16 = -766904796;
int var_17 = -219315823;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
