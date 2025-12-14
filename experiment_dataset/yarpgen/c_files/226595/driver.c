#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3246;
_Bool var_1 = (_Bool)1;
int var_2 = -1997817142;
unsigned short var_3 = (unsigned short)11684;
unsigned long long int var_6 = 11917142849788059995ULL;
unsigned long long int var_7 = 8280412169179019446ULL;
int zero = 0;
int var_10 = -280848517;
unsigned short var_11 = (unsigned short)40567;
unsigned long long int var_12 = 15298743985355024006ULL;
unsigned long long int var_13 = 234908095744097029ULL;
unsigned char var_14 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
