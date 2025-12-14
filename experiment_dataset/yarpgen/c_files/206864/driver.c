#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 366035277968724015ULL;
unsigned long long int var_3 = 4854079633080386200ULL;
int var_4 = -1319351925;
unsigned long long int var_6 = 62039611832334847ULL;
unsigned char var_8 = (unsigned char)251;
unsigned char var_10 = (unsigned char)155;
unsigned long long int var_11 = 12728664916340301836ULL;
int zero = 0;
unsigned long long int var_12 = 96187012492616067ULL;
unsigned long long int var_13 = 3108088073249289869ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
