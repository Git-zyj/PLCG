#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1362546165157135691ULL;
short var_10 = (short)-5904;
int zero = 0;
long long int var_15 = 4184788219168362800LL;
short var_16 = (short)16610;
unsigned short var_17 = (unsigned short)51471;
unsigned long long int var_18 = 10501209043015372399ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
