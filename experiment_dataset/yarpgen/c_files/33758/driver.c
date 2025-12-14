#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned long long int var_3 = 1858712629409390508ULL;
unsigned short var_4 = (unsigned short)63644;
short var_5 = (short)12288;
unsigned long long int var_6 = 2771253416303340897ULL;
unsigned long long int var_9 = 17327464468525769286ULL;
unsigned short var_10 = (unsigned short)8792;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)63274;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
