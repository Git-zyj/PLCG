#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)123;
unsigned long long int var_6 = 10290749147147866848ULL;
short var_8 = (short)12987;
unsigned long long int var_11 = 14364753327488709318ULL;
unsigned long long int var_18 = 9500142758761468947ULL;
int zero = 0;
short var_20 = (short)-5684;
short var_21 = (short)5273;
void init() {
}

void checksum() {
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
