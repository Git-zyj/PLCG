#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15913;
long long int var_4 = 5866303938902465106LL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)8206;
short var_13 = (short)-9412;
signed char var_14 = (signed char)-86;
int zero = 0;
long long int var_16 = 5929131878627543371LL;
unsigned int var_17 = 4214027792U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
