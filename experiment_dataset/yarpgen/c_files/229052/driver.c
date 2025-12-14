#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-44;
long long int var_4 = -4369319782010216040LL;
long long int var_6 = 3895687863115928263LL;
unsigned char var_9 = (unsigned char)95;
unsigned int var_11 = 1434057620U;
short var_14 = (short)-2089;
unsigned int var_16 = 258468934U;
int zero = 0;
unsigned int var_18 = 42691902U;
int var_19 = -1057368742;
long long int var_20 = -6918592430769850023LL;
void init() {
}

void checksum() {
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
