#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13839618869491862109ULL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)-27892;
short var_6 = (short)-30364;
int zero = 0;
unsigned long long int var_10 = 14493360401192626039ULL;
short var_11 = (short)22133;
long long int var_12 = 8316553091387786079LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
