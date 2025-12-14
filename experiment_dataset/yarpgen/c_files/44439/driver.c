#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3965686967U;
unsigned long long int var_2 = 6480791179554759655ULL;
signed char var_3 = (signed char)-102;
unsigned long long int var_5 = 1603398411797931859ULL;
int zero = 0;
unsigned int var_10 = 2755760046U;
unsigned int var_11 = 1944482750U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4263154657U;
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
