#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4603888684694173526ULL;
short var_2 = (short)17973;
unsigned long long int var_3 = 2038738342854293554ULL;
short var_6 = (short)-1382;
unsigned long long int var_9 = 15758815935009586999ULL;
short var_12 = (short)-29793;
unsigned long long int var_13 = 17959603380557953874ULL;
short var_14 = (short)-14662;
int zero = 0;
unsigned long long int var_18 = 16127833712054161657ULL;
unsigned long long int var_19 = 14574974674350112373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
