#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51220;
short var_3 = (short)17106;
unsigned long long int var_5 = 11289800586864427839ULL;
int var_7 = -1415396789;
long long int var_9 = -1914504526848881505LL;
short var_15 = (short)1872;
int zero = 0;
unsigned long long int var_19 = 4594699608047684270ULL;
unsigned long long int var_20 = 1949519337472837945ULL;
long long int var_21 = 1895475919134842440LL;
short var_22 = (short)-23799;
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
