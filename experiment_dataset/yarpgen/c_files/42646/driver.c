#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)941;
unsigned int var_5 = 1784605110U;
unsigned int var_10 = 2967695555U;
unsigned long long int var_14 = 11650812222868688277ULL;
int var_15 = -14776274;
int zero = 0;
signed char var_19 = (signed char)102;
signed char var_20 = (signed char)-69;
unsigned long long int var_21 = 7509172973152892596ULL;
void init() {
}

void checksum() {
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
