#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9936537040931417289ULL;
signed char var_6 = (signed char)119;
long long int var_8 = -6119812370865364027LL;
unsigned short var_11 = (unsigned short)19951;
short var_13 = (short)5325;
long long int var_14 = -6486208261168319090LL;
int zero = 0;
unsigned long long int var_16 = 15616769846495350732ULL;
unsigned int var_17 = 2989929174U;
unsigned long long int var_18 = 11904631854595197889ULL;
int var_19 = -1489231041;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
