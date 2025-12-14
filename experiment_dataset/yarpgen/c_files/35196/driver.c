#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17202776631927850011ULL;
unsigned long long int var_1 = 8393582438426031927ULL;
unsigned int var_2 = 4267220828U;
unsigned long long int var_3 = 6884274027711136680ULL;
signed char var_9 = (signed char)100;
int zero = 0;
unsigned short var_10 = (unsigned short)27659;
long long int var_11 = 7401520971330200764LL;
unsigned long long int var_12 = 13804633702270558799ULL;
int var_13 = -1038043099;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
