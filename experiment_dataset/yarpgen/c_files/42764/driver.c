#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 226233260;
int var_1 = 30776539;
unsigned short var_2 = (unsigned short)10802;
int var_4 = 1843299180;
int var_8 = -1250343230;
unsigned short var_9 = (unsigned short)33218;
int var_10 = 1491952721;
int var_11 = 823313849;
int var_15 = 1345951160;
int zero = 0;
int var_20 = 2018287923;
int var_21 = -1102833477;
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
