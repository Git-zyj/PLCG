#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9332445375377425961ULL;
unsigned long long int var_1 = 10136019873951885757ULL;
signed char var_2 = (signed char)-46;
long long int var_4 = -7699701073358644071LL;
long long int var_5 = -2568335831089998850LL;
long long int var_6 = 4391860935139993047LL;
int var_8 = -1991423487;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)29910;
int zero = 0;
long long int var_16 = -9095052997816179867LL;
unsigned short var_17 = (unsigned short)15039;
unsigned short var_18 = (unsigned short)33384;
void init() {
}

void checksum() {
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
