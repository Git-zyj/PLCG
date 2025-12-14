#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8298;
long long int var_4 = 7429124846016330997LL;
signed char var_8 = (signed char)-72;
long long int var_11 = 6971033792962644184LL;
unsigned int var_15 = 3719495782U;
int zero = 0;
unsigned int var_17 = 1696738569U;
long long int var_18 = 2791369807629100945LL;
unsigned long long int var_19 = 7193901352363828515ULL;
unsigned long long int var_20 = 11846775741876309994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
