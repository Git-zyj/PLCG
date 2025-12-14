#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1434986688;
unsigned long long int var_2 = 3175889109276629021ULL;
unsigned char var_5 = (unsigned char)153;
unsigned int var_9 = 255627448U;
unsigned int var_10 = 2151573220U;
short var_12 = (short)-5778;
unsigned long long int var_15 = 4274162516787559408ULL;
int zero = 0;
unsigned int var_16 = 680623870U;
long long int var_17 = -5859126529141583910LL;
unsigned long long int var_18 = 18117455247004883908ULL;
signed char var_19 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
