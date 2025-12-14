#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 925278232;
unsigned short var_5 = (unsigned short)17693;
unsigned short var_6 = (unsigned short)58448;
unsigned long long int var_8 = 18355036867250177560ULL;
unsigned long long int var_10 = 17849576470836850233ULL;
int zero = 0;
unsigned long long int var_11 = 9435169999233204101ULL;
short var_12 = (short)31843;
unsigned long long int var_13 = 17029599170961375135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
