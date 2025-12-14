#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7768253551975827066LL;
long long int var_13 = 6968392480837322280LL;
unsigned int var_15 = 113286500U;
int zero = 0;
long long int var_17 = 5410509877255150041LL;
unsigned long long int var_18 = 2464661830922755520ULL;
unsigned long long int var_19 = 3354094571510247388ULL;
long long int var_20 = 1239193118294244533LL;
unsigned short var_21 = (unsigned short)24005;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
