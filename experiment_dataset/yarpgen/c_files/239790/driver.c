#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9288608987334791559ULL;
short var_3 = (short)15779;
unsigned int var_5 = 3547735709U;
long long int var_6 = -304445372178461923LL;
unsigned long long int var_10 = 11826132136268517776ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)16767;
unsigned short var_13 = (unsigned short)57555;
unsigned long long int var_14 = 15488842769487420167ULL;
void init() {
}

void checksum() {
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
