#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2878091555888979030LL;
unsigned long long int var_1 = 793523283898512673ULL;
unsigned long long int var_2 = 16120091392343260841ULL;
_Bool var_3 = (_Bool)0;
int var_5 = -1715667890;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 1117360921U;
short var_11 = (short)-2036;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
