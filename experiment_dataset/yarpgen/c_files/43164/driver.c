#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14603046320339728929ULL;
short var_10 = (short)11556;
int var_11 = 1702640092;
int var_17 = 124768400;
int zero = 0;
unsigned short var_18 = (unsigned short)44911;
unsigned short var_19 = (unsigned short)34402;
unsigned long long int var_20 = 6908163002152767570ULL;
signed char var_21 = (signed char)-10;
void init() {
}

void checksum() {
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
