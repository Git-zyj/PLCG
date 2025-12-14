#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)1373;
unsigned short var_7 = (unsigned short)12104;
unsigned short var_10 = (unsigned short)571;
int zero = 0;
int var_12 = 1444044784;
unsigned long long int var_13 = 6131016493527005960ULL;
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
