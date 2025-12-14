#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38045;
unsigned long long int var_6 = 5159893563419702320ULL;
unsigned int var_17 = 1534906433U;
signed char var_18 = (signed char)-115;
int zero = 0;
unsigned long long int var_20 = 11623243848203913067ULL;
long long int var_21 = -2002632443218407381LL;
signed char var_22 = (signed char)-2;
void init() {
}

void checksum() {
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
