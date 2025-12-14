#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3178972486914612943LL;
int var_3 = 1375273372;
signed char var_5 = (signed char)1;
unsigned long long int var_6 = 8929815443915426129ULL;
signed char var_8 = (signed char)-10;
int zero = 0;
signed char var_10 = (signed char)-121;
int var_11 = 161468191;
unsigned long long int var_12 = 17355653668503732518ULL;
signed char var_13 = (signed char)104;
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
