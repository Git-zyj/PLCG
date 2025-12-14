#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)119;
unsigned long long int var_12 = 1400233510113966007ULL;
int zero = 0;
signed char var_13 = (signed char)-84;
int var_14 = 2084963540;
long long int var_15 = -7086136715213821474LL;
unsigned long long int var_16 = 813809859265287698ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
