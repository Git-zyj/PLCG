#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1892792521U;
unsigned short var_3 = (unsigned short)40363;
unsigned short var_8 = (unsigned short)12674;
unsigned short var_9 = (unsigned short)38671;
unsigned short var_11 = (unsigned short)17902;
int zero = 0;
unsigned short var_12 = (unsigned short)11371;
unsigned int var_13 = 4190456048U;
unsigned short var_14 = (unsigned short)25354;
long long int var_15 = -6144873357319321902LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
