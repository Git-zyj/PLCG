#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)59059;
signed char var_4 = (signed char)-83;
unsigned short var_5 = (unsigned short)49757;
unsigned short var_8 = (unsigned short)43736;
unsigned long long int var_10 = 13831676412037852778ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)48378;
long long int var_19 = 3651029747377271146LL;
unsigned int var_20 = 1533587045U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
